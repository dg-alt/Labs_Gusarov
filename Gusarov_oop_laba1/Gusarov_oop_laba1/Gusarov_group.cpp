#include "Gusarov_group.h"
#include <string>

void Gusarov_group::addStudent(Gusarov_student& student) {


	cout << "Ссылка на объект: ";
	cout << &student << endl;

	this->list.push_back(&student);
}

void Gusarov_group::showGroup() {
	cout << endl << "Список студентов: " << "\n\n";
	for (Gusarov_student* student : this->list) {
		cout << "Ссылка на объект: ";
		cout << student << endl;
		student->showAttributes();
		cout << endl;
	}
}

void Gusarov_group::loadFromFile(string& fileName) {
	this->clear();
	fstream file;
	string param;
	Gusarov_student* student;
	file.open(fileName + ".txt", ios::in);
	char c;
	while (file.is_open()) {
		file.get(c);
		if (file.peek() == EOF)
			break;
		file.unget();
		Gusarov_student* student;
		student = new Gusarov_student();
		student->Load(file);
		this->addStudent(*student);

	}
	file.close();
}

void Gusarov_group::saveInFile(string& fileName) {
	fstream file;
	file.open(fileName + ".txt", ios::out);
	for (Gusarov_student* student : this->list)
	{
		student->Save(file);
	}
	file.close();
}


void Gusarov_group::clear()
{
	for (Gusarov_student* student : this->list)
		delete student;
	this->list.clear();
}