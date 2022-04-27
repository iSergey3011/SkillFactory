#pragma once
#include <string>
#include "IElectronics.h"
using namespace std;

// ����� ������� �������. ���������� ��� ��������������:
// 1. _mass - ����� � ��.
// 2. _volume - ���������� ����� � ��3.
class Appliances : virtual public IElectronics {
public:
	Appliances(float mass, float volume);
	Appliances(float mass); // ��� ������ Televisor
	void ShowSpec() override;
protected:
	float _mass, _volume;
};

// ����� �������������. � ������ ShowSpec ���������� �������� ������ (_brandName).
class AppFridge : public Appliances {
public:
	AppFridge(const string& brandName, float mass, float volume);
	void ShowSpec() override;
protected:
	string _brandName;
};

// ����� ���������� �����.
class AppWash : public Appliances {
public:
	AppWash(const string& brandName, float mass, float volume);
	void ShowSpec() override;
protected:
	string _brandName;
};
