// samedov.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "Gusarov_student.h"
#include "Gusarov_group.h"
#include <Windows.h>
using namespace std;



int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� �����
    setlocale(LC_ALL, "Rus"); // ����������� �������� �����
    Gusarov_group abc;

    while (true) {
        cout << "������ :";
        cout << abc.list.size() << endl;
        int command;

        cout << "1. �������� ��������" << endl
            << "2. �������� ������" << endl
            << "3. ��������� ������" << endl
            << "4. ��������� ������" << endl
            << "5. �������� ������\n" << endl
            << "�������� ��������: ";
        cin >> command;
        switch (command) {

        case 1: {
            Gusarov_student* student = new Gusarov_student();
            student->setAttributes();
            abc.addStudent(*student);
            cout << endl;
            break;
        }
        case 2: {
            abc.showGroup();
            break;
        }
        case 3: {
            string fileName;
            cout << "������� �������� �����: ";
            cin >> fileName;
            abc.loadFromFile(fileName);

            break;
        }
        case 4: {
            string fileName;
            cout << "������� �������� �����: ";
            cin >> fileName;
            abc.saveInFile(fileName);
            break;
        }
        case 5: {
            abc.clear();
        }
        }
    }
}


//fout << a.age << std::endl << a.name << std::endl;
//fout << b.age << std::endl << b.name << std::endl;
//fout.close();
//a.age = 0;
//a.f2(file);
//a.f2(file);

//std::cout << a.age;

//for (;;) {
//    int command;
//    cout << "1: �������� ��������" << endl;
//    cout << "2: ������� ������ ��������" << endl;
//    cout << "3: ������� ������ �� �����" << endl;
//    cout <<  "4: ��������� ������ � ����" << endl;
//        

//}