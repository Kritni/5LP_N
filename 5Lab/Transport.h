#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "Key.h"

//Структура "транспорт"
struct Transport {
    Key K; //Идентификатор транспорта
    int Speed; //Скорость
    int Distance; //Расстояние м/у пунктами отправления и назначения
    double Cargo_weight; //Масса груза
};

#endif // TRANSPORT_H