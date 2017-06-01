#ifndef ARRAY_H
#define ARRAY_H
#pragma once

#include<string>
#include"Users.h"
#include"Personnel.h"
#include"medicine.h"


#define USER 1
#define MEDICINE 2
#define PERSONNEL 3

#define E_NUMBER 1
#define E_AUTHORITY 2
#define E_ACCOUNT 3
#define W_UPDATE_MEDICINE 4
#define NO_ERROR 5

using std::string;

class Array
{
public:
	Array() {}
	Array(Array &);
	bool catchError(int error_code);
	static void modifyArray(int n,int type);
	static void login(int type);
private:
	static int numArrayOfUser;
	static int numArrayOfPersonnel;
	static int numArrayOfMedicine;
	static int current_user;
};

class ArrayOfUser :virtual public Array
{
public:
	ArrayOfUser();
	ArrayOfUser(int n);
	ArrayOfUser(ArrayOfUser &);
	~ArrayOfUser();
	void Add(int t_authority, int t_number, string t_account, string t_password);
	void Show(int index, int mode);
	void Delete(int index);
	void ShowAllUser();
	int FindIndex(int t_number);
	int calNumberOfUser();
	int checkAuthority();
	int checkFormat(int t_authority, int t_number, string t_account);

private:
	User* user;
	int record_index;
	int num_of_user;
	bool admin_existed;
};

class ArrayOfPersonnel :virtual public Array
{
public:
	ArrayOfPersonnel();
	ArrayOfPersonnel(int n);//构造函数
	ArrayOfPersonnel(ArrayOfPersonnel &);
	~ArrayOfPersonnel();//析构函数
	void Add(int t_number, string t_name, int t_age, int t_identity);//添加
	void Show(int index, int mode);//查询
	void Delete(int index);//删除
	void ShowAllPersonnel();//输出所有用户的信息
	int FindIndex(int t_number);//按照number查找用户在动态数组类中的下表
	int checkFormat(int t_number);	// name doesn't need to be checked for different people can actually have the same name.
	friend class Personnel;
private:
	Personnel* personnel;//指向动态数组首地址
	int record_index;
	int num_of_personnel;
};

class ArrayOfMedicine :virtual public Array
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
	int FindIndex(int t_number);
	int calNumberOfMedicine();
	int checkFormat(int t_number, string t_name);	// the number of medicine must be unique.
													// two cases:
													// if there is an existed number in  the warehouse which is the same as the parameter t_number, then
													// check if t_name is also existed. If so, print a message on the screen which tells the user that thia medicine has existed and would you like to change the amount.
													// In this case, we assume that the user wants to change the amount of a certain kind of medicine.
													// if t_number exists but t_name doesn't match t_number, we can jugde that the user has a wrong input. You should then print a notice.

private:
	Medicine* medicine;
	int record_index;
	int num_of_medicine;
};


#endif
