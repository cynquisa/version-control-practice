#include <iostream>
#include "Crypt.h" // include the class 
#include "Menu.h"
int main()
{
    Crypt crypt; // create the obj
    crypt.DisplayMessage(); // display the message

    Menu menu;
    menu.DisplayMenu();

    std::cin.get(); // pause for a keypress before closing
    return 0;
}