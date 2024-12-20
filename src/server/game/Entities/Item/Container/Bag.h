/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_BAG_H
#define TRINITY_BAG_H

// Maximum 98 Slots ((CONTAINER_END - CONTAINER_FIELD_SLOT_1)/2
#define MAX_BAG_SIZE 98                                     // 11.0.0

#include "Item.h"

class TC_GAME_API Bag : public Item
{
    public:
        Bag();
        ~Bag();

        void AddToWorld() override;
        void RemoveFromWorld() override;

        bool Create(ObjectGuid::LowType guidlow, uint32 itemid, ItemContext context, Player const* owner) override;

        void StoreItem(uint8 slot, Item* pItem, bool update);
        void RemoveItem(uint8 slot, bool update);

        Item* GetItemByPos(uint8 slot) const;

        uint8 GetSlotByItemGUID(ObjectGuid guid) const;
        bool IsEmpty() const;
        uint32 GetFreeSlots() const;
        uint32 GetBagSize() const { return m_containerData->NumSlots; }

        // DB operations
        // overwrite virtual Item::SaveToDB
        void SaveToDB(CharacterDatabaseTransaction trans) override;
        // overwrite virtual Item::LoadFromDB
        bool LoadFromDB(ObjectGuid::LowType guid, ObjectGuid owner_guid, Field* fields, uint32 entry) override;
        // overwrite virtual Item::DeleteFromDB
        void DeleteFromDB(CharacterDatabaseTransaction trans) override;

    protected:
        void BuildCreateUpdateBlockForPlayer(UpdateData* data, Player* target) const override;
        void BuildValuesCreate(ByteBuffer* data, UF::UpdateFieldFlag flags, Player const* target) const override;
        void BuildValuesUpdate(ByteBuffer* data, UF::UpdateFieldFlag flags, Player const* target) const override;
        void ClearUpdateMask(bool remove) override;

    public:
        void BuildValuesUpdateForPlayerWithMask(UpdateData* data, UF::ObjectData::Mask const& requestedObjectMask, UF::ItemData::Mask const& requestedItemMask,
            UF::ContainerData::Mask const& requestedContainerMask, Player const* target) const;

        struct ValuesUpdateForPlayerWithMaskSender // sender compatible with MessageDistDeliverer
        {
            explicit ValuesUpdateForPlayerWithMaskSender(Bag const* owner) : Owner(owner) { }

            Bag const* Owner;
            UF::ObjectData::Base ObjectMask;
            UF::ItemData::Base ItemMask;
            UF::ContainerData::Base ContainerMask;

            void operator()(Player const* player) const;
        };

        std::string GetDebugInfo() const override;

        UF::UpdateField<UF::ContainerData, int32(WowCS::EntityFragment::CGObject), TYPEID_CONTAINER> m_containerData;

    protected:
        void SetBagSize(uint32 numSlots) { SetUpdateFieldValue(m_values.ModifyValue(&Bag::m_containerData).ModifyValue(&UF::ContainerData::NumSlots), numSlots); }
        void SetSlot(uint32 slot, ObjectGuid guid) { SetUpdateFieldValue(m_values.ModifyValue(&Bag::m_containerData).ModifyValue(&UF::ContainerData::Slots, slot), guid); }

        // Bag Storage space
        Item* m_bagslot[MAX_BAG_SIZE];
};

#endif
