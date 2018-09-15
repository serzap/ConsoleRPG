#include "CAbility.hpp"

CAbility::CAbility()
    : mName("")
    , mManaCost(0)
    , mDamage(0)
    , mLevel(0)
{

}

CAbility::CAbility(std::string name, int manaCost, int damage, int level)
    : mName(name)
    , mManaCost(manaCost)
    , mDamage(damage)
    , mLevel(level)
{

}
