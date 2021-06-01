#ifndef SHIP_H
#define SHIP_H

#include "Key.h"

//Структура "корабль"
struct Ship {
	Key K; //Идентификатор транспорта
	int Speed; //Скорость
	int Distance; //Расстояние м/у пунктами отправления и назначения
	double Cargo_weight; //Масса груза
	int Displacement; //Водоизмещение

	//Тип корабля
	enum Type {
		LINER, //Лайнер
		TOWBOAT, //Буксир
		TANKER //Танкер
	};

	Type T;

};

#endif // SHIP_H