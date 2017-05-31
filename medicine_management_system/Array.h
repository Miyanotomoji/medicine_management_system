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
	void Add(int t_authority, int t_number, string t_account, string t_password);
	void Show(int index, int mode);
	void Delete(int index);
	void ShowAllUser();
	int FindIndex(int t_number);
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
	ArrayOfPersonnel(int n);//���캯��
	ArrayOfPersonnel(ArrayOfPersonnel &);
	~ArrayOfPersonnel();//��������
	void Add(int t_number, string t_name, int t_age, int t_authortiy);//���
	void Show(int index);//��ѯ
	void Delete(int index);//ɾ��
	void ShowAllPersonnel();//��������û�����Ϣ
	int FindIndex(int t_number);//����number�����û��ڶ�̬�������е��±�
	friend class Personnel;
private:
	Personnel* personnel;//ָ��̬�����׵�ַ
	int record_index;
	int num_of_personnel;
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
	int FindIndex(int t_number);
	int calNumberOfMedicine();

private:
	Medicine* medicine;
	int record_index;
	int num_of_medicine;
};


#endif
