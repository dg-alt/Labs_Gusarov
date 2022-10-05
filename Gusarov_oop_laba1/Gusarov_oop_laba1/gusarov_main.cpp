// samedov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Gusarov_student.h"
#include "Gusarov_group.h"
#include <Windows.h>
using namespace std;



int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывод
    setlocale(LC_ALL, "Rus"); // Подключение русского языка
    Gusarov_group abc;

    while (true) {
        cout << "Размер :";
        cout << abc.list.size() << endl;
        int command;

        cout << "1. Добавить студента" << endl
            << "2. Показать группу" << endl
            << "3. Загрузить группу" << endl
            << "4. Сохранить группу" << endl
            << "5. Очистить группу\n" << endl
            << "Выберите команнду: ";
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
            cout << "Введите название файла: ";
            cin >> fileName;
            abc.loadFromFile(fileName);

            break;
        }
        case 4: {
            string fileName;
            cout << "Введите название файла: ";
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
//    cout << "1: Добавить студента" << endl;
//    cout << "2: Вывести данные студента" << endl;
//    cout << "3: Считать данные из файла" << endl;
//    cout <<  "4: Загрузить данные в файл" << endl;
//        

//}