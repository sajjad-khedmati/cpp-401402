#include <iostream>
#include <conio.h>

using namespace std;
//CLASSES
#include "./classes/Person.h"

//PAGES
#include "./pages/mainMenu.h"

int main() {

    int choice = 0;
   while(choice != '4'){
        Menu();
       choice = getch();
       switch (choice) {
           case '1':
               break;
           case '4':
               break;
       }
   }


    cin.get();

    return 0;
}
