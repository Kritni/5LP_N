#include "Out_Airplane.h"

void Out_Airplane(int Speed, int Distance, double Cargo_weight, Airplane* A, ofstream& ofst) {
    ofst << "It's an Airplane with Flight range: " << A->Flight_range << " kilometers" << endl;
    ofst << "Its Load Capacity is " << A->Load_capacity << " kilograms" << endl;
    ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl;
    ofst << "Its Cargo Weight is " << Cargo_weight << " kilograms" << endl;
}