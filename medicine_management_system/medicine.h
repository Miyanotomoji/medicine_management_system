// header file of class Medicine
#ifndef MEDICINE_H
#define MEDICINE_H
#pragma once

#include<string>
#include"Array.h"

#define SHOW_TITLES 0
#define NO_SHOW_TITLES 1
#define ONLY_SHOW_TITLES 3

const int MAX_RECORD = 1000;

using std::string;

class Medicine
{
public:
	Medicine() {}
	Medicine(int t_number, string t_name, int amount, double price);
	Medicine(Medicine & t_medicine);
	friend class ArrayOfMedicine;

private:
	string name;
	int number;
	int amount;
	double price;
	bool accessibility;
	int index;
};

#endif
