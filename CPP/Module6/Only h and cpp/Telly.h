#pragma once
#include <string>
#include "Device.h"
#include "Appliances.h"
using namespace std;

// ����� �����������. ��������� ���� ������� Device � Appliances.
// � ������������ Device ���� ���� ������ ������.
// � ������������ Appliances ���� ���� �����.
class Televisor : public Device, Appliances {
public:
	Televisor(const string& brandName, float displaySize, float mass);
	void ShowSpec() override;
protected:
	string _brandName;
};