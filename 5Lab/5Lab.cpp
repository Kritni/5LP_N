#include <iostream>

#include "Container.h"
#include "Init_Container.h"
#include "In_Container.h"
#include "Out_Container.h"
#include "Clear_Container.h"
#include "Sort.h"
#include "Out_Only_Airplane.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command in_file out_file"
            << endl;
        exit(1);
    }

    ifstream ifst(argv[1]);

    ofstream ofst(argv[2]);

    cout << "Start" << endl;

    Container* Head = new Container(); //Создаем "голову" контейнера
    Container* Tail = new Container(); //Создаем "хвост" контейнера

    Init_Container(Head, Tail); //Инициализируем контейнер

    In_Container(Head, Tail, ifst); //Записываем элементы в контейнер

    Sort(Head); //Сортировка контейнера

    ofst << "Filled and sorted container. " << endl;

    Out_Container(Head, ofst); //Вывод контейнера

    Out_Only_Airplane(Head, ofst); //Вывод только самолетов

    Clear_Container(Head, Tail); //Очистка контейнера

    ofst << "Empty container. " << endl;

    Out_Container(Head, ofst); //Вывод контейнера

    cout << "Stop" << endl;
    system("pause");
    return 0;
}
