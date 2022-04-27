#pragma once
#include <string>
#include "IElectronics.h"
using namespace std;

// ����� ����������� ���������. ���������� ��� ��������������:
// 1. _batteryCapacity - ����� ������� � ����������-�����.
// 2. _displaySize - ��������� ������ � ������.
class Device : virtual public IElectronics {
public:
	Device(float displaySize, int batteryCapacity);
	Device(float displaySize); // ��� ������ Televisor
	void ShowSpec() override;
protected:
	int _batteryCapacity;
	float _displaySize;
};

// ����� ���������. � ������ ShowSpec ���������� �������� ������ (_brandName).
class DevicePhone : public Device {
public:
	DevicePhone(const string& brandName, float displaySize, int batteryCapacity);
	void ShowSpec() override;
protected:
	string _brandName;
};

// ����� ���������. � ������ ShowSpec ���������� �������� ������ (_brandName).
// ���������� �� DevicePhone ������ �������� ������ � ��������� ������ ������������.
class DevicePad : public Device {
public:
	DevicePad(const string& brandName, float displaySize, int batteryCapacity);
	void ShowSpec() override;
protected:
	string _brandName;
};