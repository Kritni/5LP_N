#ifndef IN_TRAIN_H
#define IN_TRAIN_H

#include "Train.h"
#include <fstream>

using namespace std;

//Функция ввода информации о поезде
Train* In_Train(ifstream& ifst);

#endif // IN_TRAIN_H