#ifndef TRAIN_H
#define TRAIN_H

#include "Key.h"

//Структура "поезд"
struct Train {
	Key K; //Идентификатор транспорта
	int Speed; //Скорость
	int Distance; //Расстояние м/у пунктами отправления и назначения
	double Cargo_weight; //Масса груза
	int Сars_amount; //Число вагонов
};

#endif // TRAIN_H