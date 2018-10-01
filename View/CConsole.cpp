#include "CConsole.hpp"
#include <iostream>

CConsole::CConsole(CController& controller)
    :mController(controller)
{

}

void CConsole::enterHeroName()
{
    std::string name;
    std::cout << "Please enter hero name" << std::endl;
    std::cin >> name;
    mController.createHero(name);
}

void CConsole::showHeroDescription()
{
    std::cout << "---HERO---" << "\n"
              << "name - " << mController.getHeroName() << std::endl;
}
