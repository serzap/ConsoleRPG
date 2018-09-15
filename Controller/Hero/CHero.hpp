#ifndef CONTROLLER_HERO_CHERO_HPP
#define CONTROLLER_HERO_CHERO_HPP

#include "CAttributes.hpp"
#include "CAbilities.hpp"
#include "CEquipment.hpp"
#include "CInventory.hpp"

class CHero
{
public:
    CHero();

private:
    CAttributes mAttributes;
    CAbilities mAbilities;
    CEquipment mEquipment;
    CInventory mInventory;
};

#endif // CONTROLLER_HERO_CHERO_HPP
