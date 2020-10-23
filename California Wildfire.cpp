// California Wildfire.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

// Function prototypes
void menuMain();
void menuSortingList();
void searchCounty();

int main()
{
    menuMain();
}

void menuMain() {
    int option;
    do {
        cout << "\n************************************************"
            << "\n*             MENU-Displaying text              *"
            << "\n* 1. Calling sortingList()                      *"
            << "\n* 2. Calling SearchCounty                       *"
            << "\n* 3. Quit                                       *"
            << "\n*************************************************";
        cout << "\nSelect an option (1, 2, or 3): ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Calling MenuSortingList()" << endl;
            menuSortingList();
            break;
        case 2:
            cout << "Calling searchCounty()" << endl;
            searchCounty();
            break;
        case 3:
            cout << "Quit" << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (option != 3);
}

void menuSortingList() {
    int option;
    do {
        cout << "\n*************************************************"
            << "\n*             MENU-display sorting              *"
            << "\n* 1. alphabetical order                         *"
            << "\n* 2. # of injuries                              *"
            << "\n* 3. # of acres destroyed                       *"
            << "\n* 4. # of people involved                       *"
            << "\n* 5. # acres burned per year                    *"
            << "\n* 6. Quit                                       *"
            << "\n*************************************************";
        cout << "\nSelect an option (1, 2, 3, 4, 5, or 6): ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Calling alphabetical order" << endl;
            break;
        case 2:
            cout << "Calling # of injuries" << endl;
            break;
        case 3:
            cout << "Calling # of acres destroyed" << endl;
            break;
        case 4:
            cout << "Call # of people involved" << endl;
            break;
        case 5:
            cout << "Call # acres burned per year" << endl;
            break;
        case 6:
            cout << "Go back to main menu" << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (option != 6);
}

void searchCounty() {

}
