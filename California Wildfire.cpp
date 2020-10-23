// California Wildfire.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

struct FireInfo
{
    int acresBurned;
    int year;
    string county;
    int fatalities;
    int injuries;
    int structDamaged;
    int structDestroyed;
    string name;
};

// Function prototypes
void menuMain();
void MenuSortingList();
void searchCounty();
void descendingOrder();
void createVec(ifstream&, vector<FireInfo>&);
int strToInt(string);

int main()
{
    menuMain();
}

void menuMain() {
    int option;
    do {
        cout << "\n*************************************************"
            << "\n*             MENU-Displaying text              *"
            << "\n* 1. Calling sortingList()                                  *"
            << "\n* 2. Calling SearchCounty                        *"
            << "\n* 3. Quit                                         *"
            << "\n*************************************************";
        cout << "\nSelect an option (1, 2, or 3): ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Calling MenuSortingList()";
            MenuSortingList();
            break;
        case 2:
            cout << "Calling searchCounty()";
            searchCounty();
            break;
        case 3:

            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (option != 3);
}

void MenuSortingList() {
    int option;
    do {
        cout << "\n*************************************************"
            << "\n*             MENU-sorting                      *"
            << "\n* 1. alphabetical order                         *"
            << "\n* 2.  # of injuries                             *"
            << "\n* 3. # of acres destroyed                       *"
            << "\n* 4. # of people involved                       *"
            << "\n* 5.  #acres burned per year                    *"
            << "\n* 6. Quit                                       *"
            << "\n*************************************************";
        cout << "\nSelect an option (1, 2, or 3): ";
        cin >> option;

        switch (option) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (option != 6);
}

void searchCounty() {

}

void createVec(ifstream& file, vector<FireInfo>& fires){
    //Creates a vector of struct FireInfo items
    //@param is the csv file from which we will read and the vector of FireInfo
    

    string acresBurned, year, county, fatalities, injuries, structDamaged, structDestroyed, name;
    int ab, yr, fa, in, sdm, sdy;//Abbreviated from the strings above. strings must be converted to ints
    
    FireInfo fireItem;

    while(file.good()){
        //Reads in all values as string
        //Conversion from string to int done through stringstream
        //Columns seperated by delimeter ',' , rows separated by delimeter '\n'

        getline(file, acresBurned, ',');
        ab = strToInt(acresBurned);
        getline(file, year, ',');
        yr = strToInt(year);
        getline(file, county, ',');
        getline(file, fatalities, ',');
        fa = strToInt(fatalities);
        getline(file, injuries, ',');
        in = strToInt(injuries);
        getline(file, structDamaged, ',');
        sdm = strToInt(structDamaged);
        getline(file, structDestroyed, ',');
        sdy = strToInt(structDestroyed);
        getline(file, name, '\n');

        fireItem.acresBurned = ab;
        fireItem.year = yr;
        fireItem.county = county;
        fireItem.fatalities = fa;
        fireItem.injuries = in;
        fireItem.structDamaged = sdm;
        fireItem.structDestroyed = sdy;
        fireItem.name = name;

        fires.push_back(fireItem);

    }
}

int strToInt(string s){
    //Turns the given string into an int
    //@param string read in from the file
    //@return is the int converted from @param
    int x;
    stringstream sti(s);
    sti >> x;
    return x;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


//This is just a test!!! !
