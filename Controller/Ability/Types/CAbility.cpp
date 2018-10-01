#include "CAbility.hpp"

#include "sstream"

CAbility::CAbility()
    : mAbilityType(AbilityType::None)
    , mDamageType(DamageType::None)
    , mName("")
    , mManaCost(0)
    , mDamage(0)
    , mLevel(0)
{

}

CAbility::CAbility(AbilityType::type abilityType, DamageType::type damageType, std::string name, int manaCost, int damage, int level)
    : mAbilityType(abilityType)
    , mDamageType(damageType)
    , mName(name)
    , mManaCost(manaCost)
    , mDamage(damage)
    , mLevel(level)
{

}

std::string CAbility::toString() const
{
    std::stringstream ss;
    ss << "Ability type: " << AbilityType::toString(mAbilityType)
       << "Damage type: " << DamageType::toString(mDamageType)
       << "Name: " << mName
       << "Mana cost: " << mManaCost
       << "Damage: " << mDamage
       << "Level: " << mLevel;
    return ss.str();
}
