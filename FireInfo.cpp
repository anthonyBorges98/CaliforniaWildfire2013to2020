#include "FireInfo.h"

FireInfo::FireInfo() {
    acresBurned = 0;
    year = 0;
    county = "None";
    fatalities = 0;
    injuries = 0;
    structDamaged = 0;
    structDestroyed = 0;
    name = "None";
}

FireInfo::FireInfo(int acresBurned, int year, string county,
    int fatalities, int injuries, int structDamaged,
    int structDestroyed, string name) {
    this->acresBurned = acresBurned;
    this->year = year;
    this->county = county;
    this->fatalities = fatalities;
    this->injuries = injuries;
    this->structDamaged = structDamaged;
    this->structDestroyed = structDestroyed;
    this->name = name;
}

int FireInfo::getAcresBurned() const
{
    return acresBurned;
}

void FireInfo::setAcresBurned(int acresBurned)
{
    this->acresBurned = acresBurned;
}

int FireInfo::getYear() const
{
    return year;
}

void FireInfo::setYear(int year)
{
    this->year = year;
}

string FireInfo::getCounty() const
{
    return county;
}

void FireInfo::setCounty(string county)
{
    this->county = county;
}

int FireInfo::getFatalities() const
{
    return fatalities;
}

void FireInfo::setFatalities(int fatalities)
{
    this->fatalities = fatalities;
}

int FireInfo::getInjuries() const
{
    return injuries;
}

void FireInfo::setInjuries(int injuries)
{
    this->injuries = injuries;
}

int FireInfo::getStructDamaged() const
{
    return structDamaged;
}

void FireInfo::setStructDamaged(int structDamaged)
{
    this->structDamaged = structDamaged;
}

int FireInfo::getStructDestroyed() const
{
    return structDestroyed;
}

void FireInfo::setStructDestroyed(int structDestroyed)
{
    this->structDestroyed = structDestroyed;
}

string FireInfo::getName() const
{
    return name;
}

void FireInfo::setName(string name)
{
    this->name = name;
}

void FireInfo::sortByFatalities(vector<FireInfo>& fires)
{

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

void FireInfo::sortByInjuries(vector<FireInfo>& fires)
{

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

void FireInfo::sortByDamaged(vector<FireInfo>& fires)
{

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

void FireInfo::sortByDestroyed(vector<FireInfo>& fires)
{

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

void FireInfo::printVector(const vector<FireInfo>& tempFires)
{
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	cout << endl;
	cout << "acresBurned" << "\t|";
	cout << "year" << "\t|\t";
	cout << "county  \t|";
	cout << "fatalities" << "\t|";
	cout << "     injuries " << "\t|";
	cout << "  buildings   \t|";
	cout << "  buildings \t|  ";
	cout << " type of fire" << endl;
	cout << "\t\t|\t|\t\t\t|\t\t|\t\t|   damaged\t|  destroyed\t|\t" << endl;
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	for (unsigned int i = 0; i < tempFires.size(); i++) {
		cout << tempFires.at(i).acresBurned << "\t\t|";
		cout << tempFires.at(i).year << "\t|\t";
		cout << tempFires.at(i).county << "|\t";
		cout << tempFires.at(i).fatalities << "\t|\t";
		cout << tempFires.at(i).injuries << "\t|\t";
		cout << tempFires.at(i).structDamaged << "\t|\t";
		cout << tempFires.at(i).structDestroyed << "\t|\t";
		cout << tempFires.at(i).name << endl;
	}
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
}

void FireInfo::createVec(ifstream& file, vector<FireInfo>& fires)
{

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

int FireInfo::strToInt(string s)
{
	//Turns the given string into an int
	//@param string read in from the file
	//@return is the int converted from @param
	int x;
	stringstream sti(s);
	sti >> x;
	return x;
}

void FireInfo::searchCounty(ifstream& files, const vector<FireInfo> fires)
{
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

void FireInfo::listOfCounty()
{
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
