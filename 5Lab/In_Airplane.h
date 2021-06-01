#ifndef IN_AIRPLANE_H
#define IN_AIRPLANE_H

#include "Airplane.h"
#include <fstream>

using namespace std;

//Функция ввода информации о самолете
Airplane* In_Airplane(ifstream& ifst);

#endif // IN_AIRPLANE_H