// header file of class Medicine
#ifndef MEDICINE_H
#define MEDICINE_H
#define SHOW_TITLES 0
#define NO_SHOW_TITLES 1
#pragma once

#include<string>

const int MAX_RECORD = 1000;

using std::string;

class Medicine
{
private:
	string name;
	int number;
	int amount;
	double price;
	bool accessibility;
	int index;
	static int count;
	static Medicine **total_index;

public:
	Medicine() {};
	Medicine(int t_number, string t_name, int amount, double price);
	Medicine(Medicine & t_medicine);
	void add(int t_number, string t_name, int t_amount, double t_price);
	void show(int mode);
	void Delete();
	static void showAllMedicine();
	static void swap(Medicine* a, Medicine* b);
};

#endif
