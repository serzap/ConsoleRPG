#include "CConsole.hpp"
#include <iostream>

CConsole::CConsole(CController& controller)
    : mController(controller)
    , mGameName("Adventures of Min'ka")
{   
    //initializes the screen
    //sets up memory and clears the screen
    initscr();

    getmaxyx(stdscr, mConsoleHeight, mConsoleWidth);

    //useful functions
    cbreak();
    noecho();

    //make cursor invisible
    curs_set(0);
}

CConsole::~CConsole()
{
    endwin();
}

void CConsole::startIntro()
{
    //print intro
    mvprintw(mConsoleHeight/2, (mConsoleWidth - mGameName.length())/2, mGameName.c_str());

    //refreshes the screen to match whats in memory
    refresh();

    //waits for user input, returns int value of that key
    getch();
    //clear window
    clear();
}

void CConsole::enterMenu()
{
    refresh();
    int height, width, start_y, start_x;
    //start button
    height = 3;
    width = 30;
    start_y = mConsoleHeight/2 - height;
    start_x = (mConsoleWidth - width)/2;
    mStartButtonWindow = newwin(height,width,start_y,start_x);
    box(mStartButtonWindow, 0, 0);
    std::string start = "START";
    wmove(mStartButtonWindow,1,(width-start.length())/2);
    wprintw(mStartButtonWindow, start.c_str());
    wrefresh(mStartButtonWindow);
    //exit button
    height = 3;
    width = 30;
    start_y = mConsoleHeight/2;
    start_x = (mConsoleWidth - width)/2;
    mExitButtonWindow = newwin(height,width,start_y,start_x);
    box(mExitButtonWindow, 0, 0);
    std::string exit = "EXIT";
    wmove(mExitButtonWindow, 1 ,(width-exit.length())/2);
    wprintw(mExitButtonWindow, exit.c_str());
    wrefresh(mExitButtonWindow);
    getch();
    clear();
}

void CConsole::createHero()
{
    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = 10;
    start_x = 10;
    mHeroCreateWindow = newwin(height,width,start_y,start_x);
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
