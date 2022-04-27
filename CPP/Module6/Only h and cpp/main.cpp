#include <iostream>
#include <string>
#include "IElectronics.h"
#include "Device.h"
#include "Appliances.h"
#include "Telly.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    IElectronics* techs[5];

    techs[0] = new DevicePhone(string("Apple"), 6.2, 3000);
    techs[1] = new DevicePad(string("Smasung"), 8.1, 6000);
    techs[2] = new AppFridge(string("Electrolux"), 65.2, 652953.3);
    techs[3] = new AppWash(string("Zanussi"), 66.5, 265680.);
    techs[4] = new Televisor(string("Samsung"), 50., 9.5);

    bool open = true;
    while (open)
    {
        cout << "Выберите устройство : 1 - телефон, 2 - планшет, 3 - холодильник, 4 - стиральная машина, 5 - телевизор. Нажмите 0, чтобы выйти." << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            techs[0]->ShowSpec();
            break;

        case 2:
            techs[1]->ShowSpec();
            break;

        case 3:
            techs[2]->ShowSpec();
            break;

        case 4:
            techs[3]->ShowSpec();
            break;

        case 5:
            techs[4]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите устройство от 1 до 5 или 0, чтобы выйти." << endl;
            break;
        }
    }
    delete techs[0];
    delete techs[1];
    delete techs[2];
    delete techs[3];
    delete techs[4];

    return 0;
}