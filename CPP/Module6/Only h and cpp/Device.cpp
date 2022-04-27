#include <iostream>
#include "Device.h"
using namespace std;

Device::Device(float displaySize, int batteryCapacity): _displaySize(displaySize), _batteryCapacity(batteryCapacity)
{
}

// для класса Televisor
Device::Device(float displaySize) : _displaySize(displaySize)
{
}

void Device::ShowSpec() {
	cout << "Capacity: " << _batteryCapacity << " mAh" << endl;
	cout << "Display Size: " << _displaySize << " in" << endl;
}

DevicePhone::DevicePhone(const string& brandName, float displaySize, int batteryCapacity) : _brandName(brandName), Device(displaySize, batteryCapacity)
{
}

void DevicePhone::ShowSpec() {
	cout << "Phone " << _brandName << endl;
	cout << "Capacity: " << _batteryCapacity << " mAh" << endl;
	cout << "Display Size: " << _displaySize << " in" << endl;
}

DevicePad::DevicePad(const string& brandName, float displaySize, int batteryCapacity) : _brandName(brandName), Device(displaySize, batteryCapacity)
{
}

void DevicePad::ShowSpec() {
	cout << "Tablet " << _brandName << endl;
	cout << "Capacity: " << _batteryCapacity << " mAh" << endl;
	cout << "Display Size: " << _displaySize << " in" << endl;
}