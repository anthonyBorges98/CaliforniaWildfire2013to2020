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
void menuSortingList(vector<FireInfo>&);
void searchCounty(ifstream&, const vector<FireInfo>);
void listOfCounty();

// Sorting function prototypes
void sortByFatalities(vector<FireInfo>&);
void sortByInjuries(vector<FireInfo>&);
void sortByDamaged(vector<FireInfo>&);
void sortByDestroyed(vector<FireInfo>&);
void printVector(const vector<FireInfo>&);

// support function
void createVec(ifstream&, vector<FireInfo>&);
int strToInt(string);


int main() {
	//searchCounty();
	menuMain();

}

void menuMain() {
	int option;
	ifstream file;

	file.open("final_fires_copy.csv");

	vector<FireInfo> fires;

	createVec(file, fires);

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
			menuSortingList(fires);
			break;
		case 2:
			cout << "Calling searchCounty()" << endl;
			searchCounty(file, fires);

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

void menuSortingList(vector<FireInfo>& fires) {
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
			printVector(fires);
			break;
		case 2:
			cout << "Calling archive year " << endl;
			break;
		case 3:
			cout << "Calling # of acres burned" << endl;
			break;
		case 4:
			cout << "Calling # of people death(fatalities) " << endl;
			sortByFatalities(fires);
			break;
		case 5:
			cout << "Calling # of people injuried " << endl;
			sortByInjuries(fires);
			break;
		case 6:
			cout << "Calling # of structures damaged " << endl;
			sortByDamaged(fires);
			break;
		case 7:
			cout << "Calling # of structures destroyed " << endl;
			sortByDestroyed(fires);
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
void searchCounty(ifstream& file, const vector<FireInfo> fires) {
	string name;
	string option;
	int i = 0;
	int count = 0;

	// I need cin.ignore() to make getline(cin, name) to work.
	// This checks for unncessary typing.

	cout << "Do you want to see the list of county for search?" << endl;
	cout << "Type yes if you want to see or anything to leave this option." << endl;

	cin >> option;

	if (option == "yes") {
		listOfCounty();
	}

	cin.ignore();
	cout << "\nWhat county are you searching for?";
	cout << " Example:Los Angeles, Riverside, San Diego, Orange, etc..." << endl;


	getline(cin, name);

	// This makes name to have 16 characters.
	for (i = 0; i < 16; i++) {
		if (i > name.size()) {
			name.insert(name.end(), ' ');
		}
	}


	cout << "acresBurned" << "\t";
	cout << "year" << "\t";
	cout << "county             ";
	cout << "fatalities" << "\t";
	cout << "     injuries" << "\t";
	cout << "buildings damaged   ";
	cout << "buildings destroyed\t";
	cout << " type of fire" << endl;

	for (i = 0; i < fires.size(); i++) {

		if (fires.at(i).county == name) {

			cout << fires.at(i).acresBurned << "\t\t";
			cout << fires.at(i).year << "\t";
			cout << fires.at(i).county << "\t\t";
			cout << fires.at(i).fatalities << "\t\t";
			cout << fires.at(i).injuries << "\t\t";
			cout << fires.at(i).structDamaged << "\t\t";
			cout << fires.at(i).structDestroyed << "\t\t    ";
			cout << fires.at(i).name << endl;
			count++;
		}

		if (count == 0 && i == fires.size() - 1) {
			cout << "\nYou typed the incorrect county name." << endl;
			cout << "Go back using the menu to search your county." << endl;
		}

	}
	cout << "The list had shown " << count << endl;
	cout << endl;
}

void listOfCounty() {
	cout << "Alameda\nAlpine\nAmador\nButte\nCalaveras\nColusa"
		<< "Contra Costa\nDel Norte\nEl Dorado\nFresno\nGlenn\nHumboldt"
		<< "\nImperial\nInyo\nKern\nKings\nLake\nLassen\nLos Angeles\nMadera"
		<< "\nMarin\nMariposa\nMendocino\nMerced\nModoc\nMono\nMonterey"
		<< "\nNapa\nNevada\nOrange\nPlacer\nPlumas\nRiverside\nSacramento"
		<< "\nSan Benito\nSan Bernardino\nSan Diego\nSan Francisco\nSan Joaquin"
		<< "\nSan Luis Obispo\nSan Mateo\nSanta Barbara\nSanta Clara\nSanta Cruz\nShasta"
		<< "\nSierra\nSiskiyou\nSolano\nSonoma\nStanislaus\nSutter\nTehama\nTrinity"
		<< "\nTulare\nTuolumne\nVentura\nYolo\nYuba " << endl;
}

void createVec(ifstream& file, vector<FireInfo>& fires) {

	//Creates a vector of struct FireInfo items
	//@param is the csv file from which we will read and the vector of FireInfo

	if (!file.is_open()) {
		cout << "Could not open file numFile.txt." << endl;
		cout << 1; // 1 indicates error

	}

	string acresBurned, year, county, fatalities, injuries, structDamaged, structDestroyed, name;
	int ab, yr, fa, in, sdm, sdy;//Abbreviated from the strings above. strings must be converted to ints
	int i;
	FireInfo fireItem;


	while (file.good()) {
		//Reads in all values as string
		//Conversion from string to int done through stringstream
		//Columns seperated by delimeter ',' , rows separated by delimeter '\n'
		getline(file, acresBurned, ',');
		ab = strToInt(acresBurned);
		getline(file, year, ',');
		yr = strToInt(year);
		getline(file, county, ',');

		// This makes county to have 16 elements. 
		for (i = 0; i < 16; i++) {
			if (i > county.size()) {
				county.insert(county.end(), ' ');
			}
		}

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

int strToInt(string s) {
	//Turns the given string into an int
	//@param string read in from the file
	//@return is the int converted from @param
	int x;
	stringstream sti(s);
	sti >> x;
	return x;
}



void sortByFatalities(vector<FireInfo>& fires) {

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).fatalities == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).fatalities >= tempFires.at(0).fatalities) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).fatalities < tempFires.at(u).fatalities) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByInjuries(vector<FireInfo>& fires) {

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).injuries == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).injuries >= tempFires.at(0).injuries) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).injuries < tempFires.at(u).injuries) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByDamaged(vector<FireInfo>& fires) {

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).structDamaged == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).structDamaged >= tempFires.at(0).structDamaged) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).structDamaged < tempFires.at(u).structDamaged) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByDestroyed(vector<FireInfo>& fires) {

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).structDestroyed == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).structDestroyed >= tempFires.at(0).structDestroyed) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).structDestroyed < tempFires.at(u).structDestroyed) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}



void printVector(const vector<FireInfo>& tempFires) {

	cout << endl;
	cout << "acresBurned" << "\t";
	cout << "year" << "\t";
	cout << "county             ";
	cout << "fatalities" << "\t";
	cout << "     injuries" << "\t";
	cout << "buildings damaged   ";
	cout << "buildings destroyed\t";
	cout << " type of fire" << endl;
	cout << endl;
	
	for (unsigned int i = 0; i < tempFires.size(); i++) {
		cout << tempFires.at(i).acresBurned << "\t\t";
		cout << tempFires.at(i).year << "\t\t";
		cout<<tempFires.at(i).county <<"\t";
		cout << tempFires.at(i).fatalities << "\t\t";
		cout << tempFires.at(i).injuries << "\t\t";
		cout << tempFires.at(i).structDamaged << "\t\t";
		cout << tempFires.at(i).structDestroyed << "\t\t";
		cout << tempFires.at(i).name << endl;
	}
	cout << endl << endl;
}
