
#ifndef FIREINFOH
#define FIREINFOH

#include <string>
#include <iostream>
using namespace std;
class FireInfo
{
public:

private:
	int acresBurned;
	int year;
	string county;
	int fatalities;
	int injuries;
	int structDamaged;
	int structDestroyed;
	string name;
public:
    int getAcresBurned() const;
    void setAcresBurned(int acresBurned);

    int getYear() const;
    void setYear(int year);

    string getCounty() const;
    void setCounty(string county);

    int getFatalities() const;
    void setFatalities(int fatalities);

    int getInjuries() const;
    void setInjuries(int injuries);

    int getStructDamaged() const;
    void setStructDamaged(int structDamaged);

    int getStructDestroyed() const;
    void setStructDestroyed(int structDestroyed);

    string getName() const;
    void setName(string name);

};

#endif