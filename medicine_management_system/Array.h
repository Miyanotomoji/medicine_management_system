#ifndef ARRAY_H
#define ARRAY_H
#pragma once

#define USER 1
#define MEDICINE 2
#define PERSONNEL 3



#include<string>
#include"Users.h"
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
	static int numArrayOfUser;
	static int numArrayOfPersonnel;
	static int numArrayOfMedicine;
};

class ArrayOfUser :public Array
{
public:
	ArrayOfUser();
	ArrayOfUser(int n);
	ArrayOfUser(ArrayOfUser &);
	~ArrayOfUser();
	void Add(int t_authority, string t_account, string t_password);
	void Show(int index, int mode);
	void Delete(int index);
	void ShowAllUser();
	int calNumberOfUser();
	int checkAuthority();

private:
	User* user;
	int record_index;
	int num_of_user;
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
	friend class Personnel;
private:
	Personnel* personnel;//指向动态数组首地址
	int record_index;
	int num_of_medicine;
};

class ArrayOfMedicine :public Array
{
public:
	ArrayOfMedicine();
	ArrayOfMedicine(int n);		// fixed amount of medicine in one warehouse
	ArrayOfMedicine(ArrayOfMedicine & array_of_medicine);
	~ArrayOfMedicine();
	void Add(int t_number, string t_name, int t_amount, double t_price);
	void Show(int index, int mode);
	void Delete(int index);
	void ShowAllMedicine();
	int calNumberOfMedicine();

private:
	Medicine* medicine;
	int record_index;
	int num_of_medicine;
};


#endif
