#ifndef CONTROLLER_ITEM_CWEAPON_HPP
#define CONTROLLER_ITEM_CWEAPON_HPP

#include "CItem.hpp"

#include <string>

class CWeapon : public CItem
{
public:
    CWeapon();
    CWeapon(std::string name, int buyPrice, int sellPrice, int damage);

private:
    int mDamage;
};

#endif // CONTROLLER_ITEM_CWEAPON_HPP
