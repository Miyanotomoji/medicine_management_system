#pragma once
#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include<iostream>
#include"Menu.h"
#include"Array.h"

extern ArrayOfPersonnel A;//�����ⲿ����

using namespace std;

void Function_Personnel_Menu_Sub();
void Function_Main_Menu();
void Function_Medicine_Management_Menu();

void Add_input()//���Person
{
	int age;
	string name;
	int number;
	int authority;
	cout << "����:";
	cin >> number;
	cout << "������:";
	cin >> name;
	cout << "������:";
	cin >> age;
	cout << "�����������ݶ�Ӧ�ı��:<1>Ա�� <2>�˿� <3>������." << endl;
	cout << "�����:";
	cin >> authority;
	if (authority != 1 && authority != 2 && authority != 3)
	{
		cout << "Error!" << endl;
		system("pause");
		Function_Personnel_Menu_Sub();
	}
	switch (authority)
	{
	case 1:
		authority = STAFF;
		break;
	case 2:
		authority = CUSTOMER;
		break;
	case 3:
		authority = VENDOR;
		break;
	}
	A.Add(number, name, age, authority);
	cout << "��ӳɹ���" << endl << endl;
	system("pause");
	Function_Personnel_Menu_Sub();//������Ա����˵����Ӳ˵�
}

void Show_all_input()
{
	A.ShowAllPersonnel();
	system("pause");
}

void Show_input()//��ѯPerson
{
	string  temp;	cout << "�����ѯ������Ϣ��������All!" << endl;	cout << "����:";	cin >> temp;	if (temp == "All")	{		Show_all_input();	}	else	{		int number;		number = stoi(temp);		int index = A.FindIndex(number);		A.Show(index,SHOW_TITLES);		system("pause");	}
	Function_Personnel_Menu_Sub();//������Ա����˵����Ӳ˵�
}

void Delete_input()//ɾ��Person
{
	int number;
	cout << "����:";
	cin >> number;
	int index = A.FindIndex(number);
	A.Delete(index);
	system("pause");
	Function_Personnel_Menu_Sub();//������Ա����˵����Ӳ˵�
}


void Function_Personnel_Menu()//��Ա����˵��Ĺ���ʵ��
{
    system("cls");
    Person_Menu();//���˵��Ľ���
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=4)
    {
        switch(temp)
        {
        case 1: Function_Personnel_Menu_Sub();break;
        case 2: Function_Personnel_Menu_Sub();break;
        case 3: Function_Personnel_Menu_Sub();break;
        case 4:
            system("cls");
            Function_Main_Menu();//�������˵�
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Personnel_Menu();//������Ա����˵�
    }
}
void Function_Personnel_Menu_Sub()//��Ա����˵����Ӳ˵��Ĺ���ʵ��
{
    system("cls");
    Person_Menu_1();//��Ա����˵����Ӳ˵��Ľ���
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=4)
    {
        switch(temp)
        {
        case 1: Show_input();break;//��ѯ
        case 2: Add_input();break;//���
        case 3: Delete_input();break;//ɾ��
        case 4:
            system("cls");
            Function_Personnel_Menu();//������Ա����˵�
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Personnel_Menu_Sub();//������Ա����˵����Ӳ˵�
    }
}
void Function_Main_Menu()//���˵��Ĺ���ʵ��
{
    system("cls");
    MainMenu();
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=3)
    {
        switch(temp)
        {
        case 1:Function_Medicine_Management_Menu();//������
        case 2:Function_Personnel_Menu();break;//��Ա����
        case 3:system("Exit");break;//�˳�
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Main_Menu();//�������˵�
    }
}
void Function_Medicine_Management_Menu()
{
    system("cls");
    Medicine_Management_Menu();
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=4)
    {
        switch(temp)
        {
        case 1://ҩƷ���
        case 2://ҩƷ����
        case 3://����ѯ
        case 4:Function_Main_Menu();//�������˵�
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Medicine_Management_Menu();//���زֿ����˵�
    }
}


#endif // FUNCTION_H_INCLUDED
