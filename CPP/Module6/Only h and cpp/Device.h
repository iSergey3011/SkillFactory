#pragma once
#include <string>
#include "IElectronics.h"
using namespace std;

// Класс электронных устройств. Показывает две характеристики:
// 1. _batteryCapacity - заряд батареи в миллиампер-часах.
// 2. _displaySize - диагональ экрана в дюймах.
class Device : virtual public IElectronics {
public:
	Device(float displaySize, int batteryCapacity);
	Device(float displaySize); // для класса Televisor
	void ShowSpec() override;
protected:
	int _batteryCapacity;
	float _displaySize;
};

// Класс телефонов. В методе ShowSpec появляется название бренда (_brandName).
class DevicePhone : public Device {
public:
	DevicePhone(const string& brandName, float displaySize, int batteryCapacity);
	void ShowSpec() override;
protected:
	string _brandName;
};

// Класс планшетов. В методе ShowSpec появляется название бренда (_brandName).
// Отличается от DevicePhone только размером экрана и величиной заряда аккумулятора.
class DevicePad : public Device {
public:
	DevicePad(const string& brandName, float displaySize, int batteryCapacity);
	void ShowSpec() override;
protected:
	string _brandName;
};