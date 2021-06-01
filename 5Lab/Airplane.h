#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Key.h"

//Структура "самолет"
struct Airplane {
	Key K; //Идентификатор транспорта
	int Speed; //Скорость
	int Distance; //Расстояние м/у пунктами отправления и назначения
	double Cargo_weight; //Масса груза
	int Flight_range; //Дальность полета
	int Load_capacity; //Грузоподъемность
};

#endif // AIRPLANE_H