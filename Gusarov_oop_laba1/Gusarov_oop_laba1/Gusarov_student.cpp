#include "Gusarov_student.h"
#include <iostream>
using namespace std;

void Gusarov_student::setAttributes() {
	cout << "������� ���: " << std::endl;
	cin >> this->name;
	cout << "������� �������: " << std::endl;
	cin >> this->age;
}

void Gusarov_student::showAttributes() {
	cout << "��� :" << this->name << endl;
	cout << "�������: " << this->age << endl;
}

void Gusarov_student::Load(std::fstream& file) {
	file >> this->name;
	file >> this->age;
}

void Gusarov_student::Save(std::fstream& file) {
	file << this->name << std::endl;
	file << this->age << std::endl;
}
