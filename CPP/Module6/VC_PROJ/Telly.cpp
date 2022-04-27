#include <iostream>
#include "Telly.h"
using namespace std;

Televisor::Televisor(const string& brandName, float displaySize, float mass): _brandName(brandName), Device(displaySize), Appliances(mass)
{
}

void Televisor::ShowSpec() {
	cout << "Televisor " << _brandName << endl;
	cout << "Display Size: " << _displaySize << " in" << endl;
	cout << "Mass: " << _mass << " kg" << endl;
}
