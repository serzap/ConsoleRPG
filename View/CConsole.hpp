#ifndef VIEW_CCONSOLE_HPP
#define VIEW_CCONSOLE_HPP

#include "../Controller/CController.hpp"

class CConsole
{
public:
    CConsole(CController& controller);

    void enterHeroName();
    void showHeroDescription();
private:
    CController& mController;
};

#endif // VIEW_CCONSOLE_HPP
