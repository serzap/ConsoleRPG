#include "CCriticalPunch.hpp"

CCriticalPunch::CCriticalPunch()
    : CAbility(AbilityType::CriticalPunch
               , DamageType::Physical
               , "Critical Punch"
               , 0
               , 0
               , 1)
{

}

CCriticalPunch::CCriticalPunch(std::string name, int manaCost, int damage, int level)
    : CAbility(AbilityType::CriticalPunch
               , DamageType::Physical
               , name
               , manaCost
               , damage
               , level)
{

}
