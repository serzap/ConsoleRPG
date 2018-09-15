#include "View/CConsole.hpp"
#include "Controller/CController.hpp"

#include "ncurses.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    //CConsole console;
    //CController controller;


    initscr();			/* Start curses mode 		  */
    printw("Hello SASHULYA");	/* Print Hello World		  */
    refresh();			/* Print it on to the real screen */
    getch();			/* Wait for user input */
    endwin();			/* End curses mode		  */
    return 0;
}
