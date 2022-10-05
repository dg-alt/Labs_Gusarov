#include "Gusarov_student.h"
#include <iostream>
using namespace std;

void Gusarov_student::setAttributes() {
	cout << "Введите имя: " << std::endl;
	cin >> this->name;
	cout << "Введите возраст: " << std::endl;
	cin >> this->age;
}

void Gusarov_student::showAttributes() {
	cout << "Имя :" << this->name << endl;
	cout << "Возраст: " << this->age << endl;
}

void Gusarov_student::Load(std::fstream& file) {
	file >> this->name;
	file >> this->age;
}

void Gusarov_student::Save(std::fstream& file) {
	file << this->name << std::endl;
	file << this->age << std::endl;
}
