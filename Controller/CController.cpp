#include "CController.hpp"

CController::CController()
    : mHero(CHero())
{

}

void CController::createHero(const std::string& name)
{
    mHero.enterName(name);
}

std::string CController::getHeroName() const
{
    return mHero.getAttributtes().getName();
}
