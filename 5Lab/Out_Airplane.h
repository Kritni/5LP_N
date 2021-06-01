#ifndef OUT_AIRPLANE_H
#define OUT_AIRPLANE_H

#include "Airplane.h"
#include <fstream>

using namespace std;

//Функция вывода информации о самолете
void Out_Airplane(int Speed, int Distance, double Cargo_weight, Airplane* A, ofstream& ofst);

#endif // OUT_AIRPLANE_H