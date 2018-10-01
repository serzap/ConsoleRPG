#include "View/CConsole.hpp"
#include "Controller/CController.hpp"

#include "ncurses.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    CController controller;
    CConsole console(controller);

    /*
    console.enterHeroName();
    console.showHeroDescription();
    */

    initscr();
    printw("Hello SASHULYA");
    refresh();
    getch();
    endwin();
    return 0;
}
