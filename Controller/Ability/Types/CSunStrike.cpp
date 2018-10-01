#include "CSunStrike.hpp"

CSunStrike::CSunStrike()
    : CAbility(AbilityType::SunStrike
               , DamageType::Magical
               , "Sun Strike"
               , 0
               , 0
               , 1)
{

}

CSunStrike::CSunStrike(std::string name, int manaCost, int damage, int level)
    : CAbility(AbilityType::SunStrike
               , DamageType::Magical
               , name
               , manaCost
               , damage
               , level)
{

}
