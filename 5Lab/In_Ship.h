#ifndef IN_SHIP_H
#define IN_SHIP_H

#include "Ship.h"
#include <fstream>

using namespace std;

//Функция ввода информации о корабле
Ship* In_Ship(ifstream& ifst);

#endif // IN_SHIP_H