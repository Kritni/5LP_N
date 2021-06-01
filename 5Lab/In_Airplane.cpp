#include "In_Airplane.h"

#include <string>
#include <iostream>

Airplane* In_Airplane(ifstream& ifst) {
    Airplane* A = new Airplane; //�������� ������ ��� �������
    string Temp_Str = ""; //��������� ����� ��� ������ ������ �� �����

    getline(ifst, Temp_Str); //������ ��������� ������

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

    A->Flight_range = atoi(Temp_Str.c_str());

    getline(ifst, Temp_Str); //������ ����������������

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

    A->Load_capacity = atoi(Temp_Str.c_str());

    return A;
}