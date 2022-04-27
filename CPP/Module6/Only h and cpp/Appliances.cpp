#include <iostream>
#include "Appliances.h"
using namespace std;

Appliances::Appliances(float mass, float volume) : _mass(mass), _volume(volume)
{
}

// для класса Televisor
Appliances::Appliances(float mass) : _mass(mass)
{
}

void Appliances::ShowSpec() {
	cout << "Mass: " << _mass << " kg" << endl;
	cout << "Volume: " << _volume << " cm3" << endl;
}

AppFridge::AppFridge(const string& brandName, float mass, float volume) : _brandName(brandName), Appliances(mass, volume)
{
}

void AppFridge::ShowSpec() {
	cout << "Refrigerator " << _brandName << endl;
	cout << "Mass: " << _mass << " kg" << endl;
	cout << "Volume: " << _volume << " cm3" << endl;
}

AppWash::AppWash(const string& brandName, float mass, float volume) : _brandName(brandName), Appliances(mass, volume)
{
}

void AppWash::ShowSpec() {
	cout << "Washing machine " << _brandName << endl;
	cout << "Mass: " << _mass << " kg" << endl;
	cout << "Volume: " << _volume << " cm3" << endl;
}