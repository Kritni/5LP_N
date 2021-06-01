#include "In_Container.h"
#include "In_Transport.h"

void In_Container(Container* Head, Container* Tail, ifstream& ifst) {
    Container* Temp;
    int Len = 0; //Переменная для подсчета числа элементов контейнера

    while (!ifst.eof()) {
        Temp = new Container();
        Temp->Next = NULL;
        Temp->Prev = NULL;

        if (!Len) {
            if ((Head->Cont = In_Transport(ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else {
            if ((Temp->Cont = In_Transport(ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }

    //Записываем размерность контейнера в каждом узле
    for (int i = 0; i < Len; i++) {
        Head->Len = Len;
        if (Head->Next) {
            Head = Head->Next;
        }
    }
}
