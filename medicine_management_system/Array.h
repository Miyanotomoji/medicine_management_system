#ifndef ARRAY_H
#define ARRAY_H
#pragma once

#define MEDICINE 0
#define PERSONNEL 1



#include<array>
#include<string>
#include"Personnel.h"
#include"medicine.h"

using std::string;

class Array
{
public:
	Array() {}
	Array(Array &);
	static void modifyArray(int n,int type);
private:
	static int numArrayOfPersonnel;
	static int numArrayOfMedicine;
};


class ArrayOfPersonnel :public Array
{
public:
	ArrayOfPersonnel();
	ArrayOfPersonnel(int n);//构造函数
	~ArrayOfPersonnel();//析构函数
	void Add(int t_number, string t_name, int t_age, int t_authortiy);//添加
	void Show(int index);//查询
	void Delete(int index);//删除
	void ShowAllPersonnel();//输出所有用户的信息
	int Find(int t_number);//按照number查找用户在动态数组类中的下表
	friend Personnel;
private:
	Personnel* personnel;//指向动态数组首地址
};

class ArrayOfMedicine :public Array
{
public:
	ArrayOfMedicine();
	ArrayOfMedicine(int n);
	ArrayOfMedicine(ArrayOfMedicine & array_of_medicine);
	void Add(int t_number, string t_name, int t_amount, double t_price);
	void Show(int mode);
	void Delete();
	static void ShowAllMedicine();
private:
	Medicine* medicine;
	static int num_of_medicine;
};


#endif
