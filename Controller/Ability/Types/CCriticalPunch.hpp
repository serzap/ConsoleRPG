#ifndef CONTROLLER_ABILITY_TYPE_CCRITICALPUNCH
#define CONTROLLER_ABILITY_TYPE_CCRITICALPUNCH

#include "CAbility.hpp"

class CCriticalPunch : public CAbility
{
public:
    CCriticalPunch();
    CCriticalPunch(std::string name, int manaCost, int damage, int level);
};

#endif
