#ifndef OUT_SHIP_H
#define OUT_SHIP_H

#include "Ship.h"
#include <fstream>

using namespace std;

//Функция вывода информации о корабле
void Out_Ship(int Speed, int Distance, double Cargo_weight, Ship* S, ofstream& ofst);

#endif // OUT_SHIP_H