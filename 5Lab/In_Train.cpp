#include "In_Train.h"

#include <string>
#include <iostream>

Train* In_Train(ifstream& ifst) {
    Train* T = new Train; //Выделяем память для поезда
    string Temp_Str = ""; //Временный буфер для чтения данных из файла

    getline(ifst, Temp_Str); //Чтение числа вагонов

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

    T->Сars_amount = atoi(Temp_Str.c_str());
    
    return T;
}