#ifndef CONTROLLER_HERO_CEQUIPMENT_HPP
#define CONTROLLER_HERO_CEQUIPMENT_HPP

class CHero;

class CEquipment
{
public:
    CEquipment(CHero& parent);

private:
    CHero& mHero;
};

#endif // CONTROLLER_HERO_CEQUIPMENT_HPP
