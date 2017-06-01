// header file of class Medicine
#pragma once
#ifndef MEDICINE_H
#define MEDICINE_H

#include<string>
#include"Array.h"

const int MAX_RECORD_MEDICINE = 1000;

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
