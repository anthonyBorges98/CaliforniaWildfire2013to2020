// California Wildfire.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

// Function prototypes
void menuMain();
void menuSortingList();
void searchCounty();

int main() {
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
            << "\n* 1. alphabetical order(Name)                   *"
            << "\n* 2. archive year                               *"
            << "\n* 3. # of acres burned                          *"
            << "\n* 4. # of people death(fatalities)              *"
            << "\n* 5. # of people injuried                       *"
            << "\n* 6. # of structures damaged                    *"
            << "\n* 7. # of structures destroyed                  *"
            << "\n* 8. Quit                                       *"
            << "\n*************************************************";
        cout << "\nSelect an option (1, 2, 3, 4, 5, or 6): ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Calling alphabetical order" << endl;
            break;
        case 2:
            cout << "Calling archive year " << endl;
            break;
        case 3:
            cout << "Calling # of acres burned" << endl;
            break;
        case 4:
            cout << "Calling # of people death(fatalities) " << endl;
            break;
        case 5:
            cout << "Calling # of people injuried " << endl;
            break;
        case 6:
            cout << "Calling # of structures damaged " << endl;
            break;
        case 7:
            cout << "Calling # of structures destroyed " << endl;
            break;
        case 8:
            cout << "Go back to main menu" << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (option != 8);
}

void searchCounty() {

}
