#ifndef CONTAINER_H
#define CONTAINER_H

#include "Transport.h"

//Контейнер
struct Container {
    int Len; //Длина контейнера
    Transport* Cont; //Указатель на транспорт
    Container* Prev; //Указатель на предыдущий элемент контейнера
    Container* Next; //Указатель на следующий элемент контейнера
};

#endif // CONTAINER_H