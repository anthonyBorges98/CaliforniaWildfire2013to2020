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

