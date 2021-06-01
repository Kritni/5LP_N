#include "Out_Only_Airplane.h"
#include "Out_Transport.h"

void Out_Only_Airplane(Container* Head, ofstream& ofst) {
    ofst << "Only Airplanes." << endl << endl;

    Container* Temp_Head = Head;

    for (int i = 0; i < Head->Len; i++) {
        //ѕроверка того, что транспорт - самолет
        if (Temp_Head->Cont->K == AIRPLANE) {
            ofst << i << ": ";
            Out_Transport(Temp_Head->Cont, ofst);
            ofst << endl;
        }

        if (Temp_Head->Next) {
            Temp_Head = Temp_Head->Next;
        }
    }
}