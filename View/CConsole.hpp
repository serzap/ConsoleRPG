#ifndef VIEW_CCONSOLE_HPP
#define VIEW_CCONSOLE_HPP

#include "../Controller/CController.hpp"

#include "ncurses.h"
#include "string"

class CConsole
{
public:
    CConsole(CController& controller);
    ~CConsole();

    void startIntro();
    void enterMenu();
    void createHero();
    void enterHeroName();
    void showHeroDescription();

private:
    CController& mController;

    int mConsoleWidth;
    int mConsoleHeight;
    std::string mGameName;

    //intro
    WINDOW* mIntroWindow;

    //menu
    WINDOW* mStartButtonWindow;
    WINDOW* mExitButtonWindow;

    //create hero
    WINDOW* mHeroCreateWindow;
};

#endif // VIEW_CCONSOLE_HPP
