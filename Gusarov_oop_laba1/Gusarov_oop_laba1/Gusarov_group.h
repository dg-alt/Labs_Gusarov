#pragma once
#include <vector>
#include "Gusarov_student.h"
#include <iostream>
using namespace std;
class Gusarov_group
{
public:
	vector <Gusarov_student*> list;
	void addStudent(Gusarov_student&);
	void showGroup();
	void saveInFile(string& fileName);
	void loadFromFile(string& fileName);
	void clear();
};

