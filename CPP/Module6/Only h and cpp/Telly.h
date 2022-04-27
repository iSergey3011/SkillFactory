#pragma once
#include <string>
#include "Device.h"
#include "Appliances.h"
using namespace std;

// Класс телевизоров. Наследник двух классов Device и Appliances.
// У конструктора Device берёт лишь размер экрана.
// У конструктора Appliances берёт лишь массу.
class Televisor : public Device, Appliances {
public:
	Televisor(const string& brandName, float displaySize, float mass);
	void ShowSpec() override;
protected:
	string _brandName;
};