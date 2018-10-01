#ifndef CONTROLLER_ABILITY_TYPE_CSUNSTRIKE
#define CONTROLLER_ABILITY_TYPE_CSUNSTRIKE

#include "CAbility.hpp"

class CSunStrike : public CAbility
{
public:
    CSunStrike();
    CSunStrike(std::string name, int manaCost, int damage, int level);
};

#endif
