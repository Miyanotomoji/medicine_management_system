// implementation of class Medicine

#include<string>
#include<iostream>
#include<iomanip>
#include"medicine.h"

using std::string;
using std::cout;
using std::endl;
using std::setw;

int Medicine::count = 0;
Medicine **Medicine::total_index = new Medicine *[MAX_RECORD];

Medicine::Medicine(int t_number, string t_name, int t_amount, double t_price)
{
	number = t_number;
	name = t_name;
	amount = t_amount;
	price = t_price;
	index = count;
	accessibility = true;
	total_index[index] = this;
	count++;
}

Medicine::Medicine(Medicine & t_medicine)
{
	number = t_medicine.number;
	name = t_medicine.name;
	amount = t_medicine.amount;
	price = t_medicine.price;
	accessibility = t_medicine.accessibility;
	count++;
}

void Medicine::add(int t_number, string t_name, int t_amount, double t_price)
{
	number = t_number;
	name = t_name;
	amount = t_amount;
	price = t_price;
	accessibility = true;
}

void Medicine::show(int mode)
{
	if (mode == 0)
	{
		cout << setw(10) << "NO" << setw(10) << "NAME" << setw(10) << "AMOUNT" << setw(10) << "PRICE" << endl;
		cout << setw(10) << number << setw(10) << name << setw(10) << amount << setw(10) << price << endl;
	}
	else
	{
		cout << setw(10) << number << setw(10) << name << setw(10) << amount << setw(10) << price << endl;
	}

	// 如果mode为SHOW_TITLES，输出题头，否则不输出题头
}

void Medicine::swap(Medicine* a, Medicine* b)
{
	Medicine * p = NULL;
	a = p;
	p = b;
	b = a;
}

void Medicine::Delete()
{
	accessibility = false;
	total_index[index] = NULL;
	for (int i = 0; i < count; i++)
	{
		if (total_index[i] == NULL)
		{
			for (int j = i; j < count; j++)
			{
				swap(total_index[j], total_index[j + 1]);
			}
		}
	}			// 保证total_index里面null都在后面，这样下面的count--才能正常工作
				// 这一段亟待修改，这样做速度太慢了
	count--;
}

void Medicine::showAllMedicine()
{
	for (int i = 0; i < count; i++)
	{
		if (total_index[i] == NULL)
		{
			break;
		}
		cout << setw(10) << "NO" << setw(10) << "NAME" << setw(10) << "AMOUNT" << setw(10) << "PRICE" << endl;
		(*total_index)->show(NO_SHOW_TITLES);
	}
}
