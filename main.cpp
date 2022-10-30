#include <iostream>
#include <conio.h>

#include "./pages/mainMenu.h"

#include "./classes/Person.h"

using namespace std;


int main() {
    int choice=0;

    while(choice != '4')
    {
        Menu();
        choice = getch();
        switch (choice) {
            case '1':
                system("cls");
                Person p1("sajjad" , "khedmati");
                p1.Print();
                getch();
                break;
        }
    }

    return 0;
}



