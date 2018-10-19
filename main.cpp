#include "View/CConsole.hpp"
#include "Controller/CController.hpp"

using namespace std;

int main()
{
    CController controller;
    CConsole console(controller);

    console.startIntro();
    console.enterMenu();
    console.createHero();
    return 0;
}
