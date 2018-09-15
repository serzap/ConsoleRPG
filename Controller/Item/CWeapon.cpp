#include "CWeapon.hpp"

CWeapon::CWeapon()
    : CItem()
    , mDamage(0)
{

}

CWeapon::CWeapon(std::string name, int buyPrice, int sellPrice, int damage)
    : CItem(name, buyPrice, sellPrice)
    , mDamage(damage)
{

}
