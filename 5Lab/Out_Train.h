#ifndef OUT_TRAIN_H
#define OUT_TRAIN_H

#include "Train.h"
#include <fstream>

using namespace std;

//Функция вывода информации о поезде
void Out_Train(int Speed, int Distance, double Cargo_weight, Train* T, ofstream& ofst);

#endif // OUT_TRAIN_H