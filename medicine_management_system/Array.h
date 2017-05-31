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
	ArrayOfPersonnel(int n);//���캯��
	~ArrayOfPersonnel();//��������
	void Add(int t_number, string t_name, int t_age, int t_authortiy);//���
	void Show(int index);//��ѯ
	void Delete(int index);//ɾ��
	void ShowAllPersonnel();//��������û�����Ϣ
	int Find(int t_number);//����number�����û��ڶ�̬�������е��±�
	friend class Personnel;
private:
	Personnel* personnel;//ָ��̬�����׵�ַ
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
