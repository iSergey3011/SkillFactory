#pragma once
#include <string>
#include "IElectronics.h"
using namespace std;

// Класс бытовой техники. Показывает две характеристики:
// 1. _mass - масса в кг.
// 2. _volume - занимаемый объём в см3.
class Appliances : virtual public IElectronics {
public:
	Appliances(float mass, float volume);
	Appliances(float mass); // для класса Televisor
	void ShowSpec() override;
protected:
	float _mass, _volume;
};

// Класс холодильников. В методе ShowSpec появляется название бренда (_brandName).
class AppFridge : public Appliances {
public:
	AppFridge(const string& brandName, float mass, float volume);
	void ShowSpec() override;
protected:
	string _brandName;
};

// Класс стиральных машин.
class AppWash : public Appliances {
public:
	AppWash(const string& brandName, float mass, float volume);
	void ShowSpec() override;
protected:
	string _brandName;
};
