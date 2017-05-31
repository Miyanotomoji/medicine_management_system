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
	ArrayOfPersonnel(int n);//���캯��
	~ArrayOfPersonnel();//��������
	void Add(int t_number, string t_name, int t_age, int t_authortiy);//���
	void Show(int index);//��ѯ
	void Delete(int index);//ɾ��
	void ShowAllPersonnel();//��������û�����Ϣ
	int Find(int t_number);//����number�����û��ڶ�̬�������е��±�
	friend Personnel;
private:
	Personnel* personnel;//ָ��̬�����׵�ַ
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
