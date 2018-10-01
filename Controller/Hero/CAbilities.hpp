#ifndef CONTROLLER_HERO_CABILITIES_HPP
#define CONTROLLER_HERO_CABILITIES_HPP

#include "../Ability/Types/CAbility.hpp"
#include <vector>

class CHero;

class CAbilities
{
public:
    CAbilities(CHero& parent);

    void addAbility(CAbility * ability);
    void removeAbility(int pos);

    std::string toString() const;

private:
    CHero& mHero;

    std::vector<CAbility> mAbilities;
};

#endif // CONTROLLER_HERO_CABILITIES_HPP
