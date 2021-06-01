#include "In_Ship.h"

#include <string>
#include <iostream>

Ship* In_Ship(ifstream& ifst) {
    Ship* S = new Ship; //�������� ������ ��� �������
    string Temp_Str = ""; //��������� ����� ��� ������ ������ �� �����

    getline(ifst, Temp_Str); //������ �������������

    if (Temp_Str == "") { //���� ������ ������
        //���������� ��������� � �������
        cout << "Input data is incomplete!";
        exit(1);
    }

    if (Temp_Str[0] == '0') { //���� ����� ���������� � 0
        //���������� ��������� � �������
        cout << "Input data is incorrect!";
        exit(1);
    }

    string Alph_num = "0123456789";

    //���� �������� ����, ��� ������ �������� ������ �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    S->Displacement = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //������ ���� �������

    if (Temp_Str == "Liner") {
        S->T = S->LINER;
    }
    else if (Temp_Str == "Towboat") {
        S->T = S->TOWBOAT;
    }
    else if (Temp_Str == "Tanker") {
        S->T = S->TANKER;
    }
    else {
        //���������� ��������� � �������
        cout << "Input data is incomplete or incorrect!";
        exit(1);
    }

    return S;
}