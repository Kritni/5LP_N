#include "Clear_Container.h"
#include <iostream>

void Clear_Container(Container* Head, Container* Tail) {
    Container* Temp = Head;

    for (int i = 0; i < Head->Len; i++) {
        free(Temp->Cont);
        Temp->Len = 0;

        if (Temp->Next) {
            Temp = Temp->Next;
            free(Temp->Prev);
        }

    }

    Head->Len = 0;
}
