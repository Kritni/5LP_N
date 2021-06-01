#include "Out_Ship.h"

void Out_Ship(int Speed, int Distance, double Cargo_weight, Ship* S, ofstream& ofst) {
    ofst << "It's a Ship with Displacement: " << S->Displacement << " thousands of tons" << endl;

    ofst << "Its Type is ";

    if (S->T == S->LINER) {
        ofst << "Liner";
    }
    else if (S->T == S->TOWBOAT) {
        ofst << "Towboat";
    }
    else if (S->T = S->TANKER) {
        ofst << "Tanker";
    }

    ofst << endl;

    ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl;
    ofst << "Its Cargo Weight is " << Cargo_weight << " kilograms" << endl;
}