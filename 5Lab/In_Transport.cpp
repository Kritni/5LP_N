#include "In_Transport.h"
#include "In_Airplane.h"
#include "In_Train.h"
#include "In_Ship.h"

#include <string>
#include <iostream>

Transport* In_Transport(ifstream& ifst) {
    Transport *T = new Transport; //�������� ������ ��� ����� ��������
    string Temp_Str = ""; //��������� ����� ��� ������ ������ �� �����

    getline(ifst, Temp_Str); //������ �������������� ����������

    //�������� ����, ��� ���� ���� �������� ��������� ������������ ����������,
    //���� �� �������� ��� �����
    if ((Temp_Str != "1") && (Temp_Str != "2") && (Temp_Str != "3")) {
        //�������� �������������� ���, ������ ��� ��� ����� ����
        if (ifst.peek() == EOF) {
            return 0;
        }
        else { //� ���� ������ ������������� ����������� �����, ���� �� ��������
            //���������� ��������� � �������
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

    getline(ifst, Temp_Str); //������ ��������

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

    T->Speed = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //������ ���������� �/� �������� ����������� � ����������

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

    //���� �������� ����, ��� ������ �������� ������ �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    T->Distance = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //������ ����� �����

    if (Temp_Str == "") { //���� ������ ������
        //���������� ��������� � �������
        cout << "Input data is incomplete!";
        exit(1);
    }

    //�������� ����, ��� ������ �� ���������� � 0, ����� ��� �������, � ����� �� ������������� ������ ��� �������
    if ((Temp_Str[0] == 0) || (Temp_Str[0] == ',') || (Temp_Str[0] == '.') ||
        (Temp_Str[Temp_Str.length() - 1] == ',') || (Temp_Str[Temp_Str.length() - 1] == '.')) {
        //���������� ��������� � �������
        cout << "Input data is incorrect!";
        exit(1);
    }

    //���� �������� ������������ ������ ������������� �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if ((Alph_num.find(Temp_Str[i]) == -1) && (Temp_Str[i] != ',') && (Temp_Str[i] != '.')) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }

        if ((Temp_Str[i] == ',') || (Temp_Str[i] == '.')) {
            if ((Temp_Str[i - 1] == ',') || (Temp_Str[i - 1] == '.') ||
                (Temp_Str[i + 1] == ',') || (Temp_Str[i + 1] == '.')) {
                //���������� ��������� � �������
                cout << "Input data is incorrect!";
                exit(1);
            }
        }
    }

    T->Cargo_weight = strtod(Temp_Str.c_str(), NULL);

    return T;
}
