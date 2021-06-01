#include "Init_Container.h"
#include <iostream>

void Init_Container(Container* Head, Container* Tail) {
    Head->Cont = Tail->Cont = NULL;
    Head->Next = Tail->Next = NULL;
    Head->Prev = Tail->Prev = NULL;
    Head->Len = Tail->Len = 0;
}