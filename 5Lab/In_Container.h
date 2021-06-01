#ifndef IN_CONTAINER_H
#define IN_CONTAINER_H

#include "Container.h"
#include <fstream>

using namespace std;

//Функция ввода элементов в контейнер
void In_Container(Container* Head, Container* Tail, ifstream& ifst);

#endif // IN_CONTAINER_H
