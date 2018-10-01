#ifndef CONTROLLER_CCONTROLLER_HPP
#define CONTROLLER_CCONTROLLER_HPP

#include "Hero/CHero.hpp"
#include "Item/CItem.hpp"

#include <vector>

class CController
{
public:
    CController();

    void createHero(const std::string& name);
    std::string getHeroName() const;

private:
    CHero mHero;
    std::vector <CItem*> mItems;
};

#endif // CCONTROLLER_COMPONENT_HPP
