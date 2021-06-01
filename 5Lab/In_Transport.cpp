#include "In_Transport.h"
#include "In_Airplane.h"
#include "In_Train.h"
#include "In_Ship.h"

#include <string>
#include <iostream>

Transport* In_Transport(ifstream& ifst) {
    Transport *T = new Transport; //Выделяем память под новый траспорт
    string Temp_Str = ""; //Временный буфер для чтения данных из файла

    getline(ifst, Temp_Str); //Чтение идентификатора транспорта

    //Проверка того, что файл либо содержит ошибочный идентификтор Транспорта,
    //либо не содержит его вовсе
    if ((Temp_Str != "1") && (Temp_Str != "2") && (Temp_Str != "3")) {
        //Возможно идентификатора нет, потому что это конец файл
        if (ifst.peek() == EOF) {
            return 0;
        }
        else { //В ином случае идентификатор отсутствует вовсе, либо он ошибочен
            //Завершение программы с ошибкой
            cout << "Input data is incomplete or incorrect!";
            exit(1);
        }
    }
    
    int K = atoi(Temp_Str.c_str());

    if (K == 1) { 
        T = (Transport*)In_Airplane(ifst); 
        T->K = AIRPLANE;
    }
    else if (K == 2) { 
        T = (Transport*)In_Train(ifst);
        T->K = TRAIN; 
    }
    else if (K == 3) {
        T = (Transport*)In_Ship(ifst);
        T->K = SHIP;
    }

    getline(ifst, Temp_Str); //Чтение скорости

    if (Temp_Str == "") { //Если строка пустая
        //Завершение программы с ошибкой
        cout << "Input data is incomplete!";
        exit(1);
    }

    if (Temp_Str[0] == '0') { //Если число начинается с 0
        //Завершение программы с ошибкой
        cout << "Input data is incorrect!";
        exit(1);
    }

    string Alph_num = "0123456789";

    //Цикл проверки того, что строка содержит только цифры
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //Завершение программы с ошибкой
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    T->Speed = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //Чтение расстояния м/у пунктами отправления и назначения

    if (Temp_Str == "") { //Если строка пустая
        //Завершение программы с ошибкой
        cout << "Input data is incomplete!";
        exit(1);
    }

    if (Temp_Str[0] == '0') { //Если число начинается с 0
        //Завершение программы с ошибкой
        cout << "Input data is incorrect!";
        exit(1);
    }

    //Цикл проверки того, что строка содержит только цифры
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //Завершение программы с ошибкой
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    T->Distance = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //Чтение массы грузы

    if (Temp_Str == "") { //Если строка пустая
        //Завершение программы с ошибкой
        cout << "Input data is incomplete!";
        exit(1);
    }

    //Проверка того, что строка не начианется с 0, точки или запятой, а также не заканчивается точкой или запятой
    if ((Temp_Str[0] == 0) || (Temp_Str[0] == ',') || (Temp_Str[0] == '.') ||
        (Temp_Str[Temp_Str.length() - 1] == ',') || (Temp_Str[Temp_Str.length() - 1] == '.')) {
        //Завершение программы с ошибкой
        cout << "Input data is incorrect!";
        exit(1);
    }

    //Цикл провреки корректности записи вещественного числа
    for (int i = 0; i < Temp_Str.length(); i++) {
        if ((Alph_num.find(Temp_Str[i]) == -1) && (Temp_Str[i] != ',') && (Temp_Str[i] != '.')) {
            //Завершение программы с ошибкой
            cout << "Input data is incorrect!";
            exit(1);
        }

        if ((Temp_Str[i] == ',') || (Temp_Str[i] == '.')) {
            if ((Temp_Str[i - 1] == ',') || (Temp_Str[i - 1] == '.') ||
                (Temp_Str[i + 1] == ',') || (Temp_Str[i + 1] == '.')) {
                //Завершение программы с ошибкой
                cout << "Input data is incorrect!";
                exit(1);
            }
        }
    }

    T->Cargo_weight = strtod(Temp_Str.c_str(), NULL);

    return T;
}
