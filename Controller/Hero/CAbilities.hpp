#ifndef CONTROLLER_HERO_CABILITIES_HPP
#define CONTROLLER_HERO_CABILITIES_HPP

class CHero;

class CAbilities
{
public:
    CAbilities(CHero& parent);

private:
    CHero& mHero;
};

#endif // CONTROLLER_HERO_CABILITIES_HPP
