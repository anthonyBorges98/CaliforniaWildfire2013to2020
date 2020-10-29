// California Wildfire.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
#include "FireInfo.h"


// Function prototypes
void menuMain();
void menuSortingList(vector<FireInfo>&, FireInfo&);


int main() {
	//searchCounty();
	menuMain();

}

void menuMain() {
	int option;
	ifstream file;
	FireInfo firesInfo;
    
	file.open("final_fires_copy.csv");

	vector<FireInfo> fires;

	firesInfo.createVec(file, fires);

	do {
		cout << "\n************************************************"
			<< "\n*             MENU-Displaying text              *"
			<< "\n* 1. Calling sortingList()                      *"
			<< "\n* 2. Calling SearchCounty()                     *"
			<< "\n* 3. Quit                                       *"
			<< "\n*************************************************";
		cout << "\nSelect an option (1, 2, or 3): ";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling MenuSortingList()" << endl;
			menuSortingList(fires, firesInfo);
			break;
		case 2:
			cout << "Calling searchCounty()" << endl;
			firesInfo.searchCounty(file, fires);

			break;
		case 3:
			cout << "Quit" << endl;
			file.close();
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}
	} while (option != 3);
}

void menuSortingList(vector<FireInfo>& fires, FireInfo& firesInfo) {
	int option;

	do {
		cout << "\n*************************************************"
			<< "\n*             MENU-display sorting              *"
			<< "\n* 1. Print vector of fire                       *"
			<< "\n* 2. archive year                               *"
			<< "\n* 3. # of acres burned                          *"
			<< "\n* 4. # of people death(fatalities)              *"
			<< "\n* 5. # of people injuried                       *"
			<< "\n* 6. # of structures damaged                    *"
			<< "\n* 7. # of structures destroyed                  *"
			<< "\n* 8. Quit                                       *"
			<< "\n*************************************************";
		cout << "\nSelect an option (1, 2, 3, 4, 5, 6, 7, or 8): ";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling printVector()" << endl;
			firesInfo.printVector(fires);
			break;
		case 2:
			cout << "Calling archive year " << endl;
			break;
		case 3:
			cout << "Calling # of acres burned" << endl;
			break;
		case 4:
			cout << "Calling # of people death(fatalities) " << endl;
			firesInfo.sortByFatalities(fires);
			break;
		case 5:
			cout << "Calling # of people injuried " << endl;
			firesInfo.sortByInjuries(fires);
			break;
		case 6:
			cout << "Calling # of structures damaged " << endl;
			firesInfo.sortByDamaged(fires);
			break;
		case 7:
			cout << "Calling # of structures destroyed " << endl;
			firesInfo.sortByDestroyed(fires);
			break;
		case 8:
			cout << "Go back to main menu" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}
	} while (option != 8);
}

/*

void sortByFatalities(vector<FireInfo>&);
void sortByInjuries(vector<FireInfo>&);
void sortByDamaged(fires);
void sortByDestroyed(fires);
void printVector(fires);*/

// This method searches certain county and display the county's descriptions.



 
