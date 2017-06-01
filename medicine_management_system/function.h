#pragma once
#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include<iostream>
#include"Menu.h"
#include"Array.h"

extern ArrayOfPersonnel A;//声明外部对象

using namespace std;

void Function_Personnel_Menu_Sub();
void Function_Main_Menu();
void Function_Medicine_Management_Menu();

void Add_input()//添加Person
{
	int age;
	string name;
	int number;
	int authority;
	cout << "☆编号:";
	cin >> number;
	cout << "☆姓名:";
	cin >> name;
	cout << "☆年龄:";
	cin >> age;
	cout << "请输入你的身份对应的编号:<1>员工 <2>顾客 <3>供销商." << endl;
	cout << "☆身份:";
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
	cout << "添加成功！" << endl << endl;
	system("pause");
	Function_Personnel_Menu_Sub();//返回人员管理菜单的子菜单
}

void Show_all_input()
{
	A.ShowAllPersonnel();
	system("pause");
}

void Show_input()//查询Person
{
	string  temp;	cout << "如需查询所有信息，请输入All!" << endl;	cout << "☆编号:";	cin >> temp;	if (temp == "All")	{		Show_all_input();	}	else	{		int number;		number = stoi(temp);		int index = A.FindIndex(number);		A.Show(index,SHOW_TITLES);		system("pause");	}
	Function_Personnel_Menu_Sub();//返回人员管理菜单的子菜单
}

void Delete_input()//删除Person
{
	int number;
	cout << "☆编号:";
	cin >> number;
	int index = A.FindIndex(number);
	A.Delete(index);
	system("pause");
	Function_Personnel_Menu_Sub();//返回人员管理菜单的子菜单
}


void Function_Personnel_Menu()//人员管理菜单的功能实现
{
    system("cls");
    Person_Menu();//主菜单的界面
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
            Function_Main_Menu();//返回主菜单
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Personnel_Menu();//返回人员管理菜单
    }
}
void Function_Personnel_Menu_Sub()//人员管理菜单的子菜单的功能实现
{
    system("cls");
    Person_Menu_1();//人员管理菜单的子菜单的界面
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=4)
    {
        switch(temp)
        {
        case 1: Show_input();break;//查询
        case 2: Add_input();break;//添加
        case 3: Delete_input();break;//删除
        case 4:
            system("cls");
            Function_Personnel_Menu();//返回人员管理菜单
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Personnel_Menu_Sub();//返回人员管理菜单的子菜单
    }
}
void Function_Main_Menu()//主菜单的功能实现
{
    system("cls");
    MainMenu();
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=3)
    {
        switch(temp)
        {
        case 1:Function_Medicine_Management_Menu();//库存管理
        case 2:Function_Personnel_Menu();break;//人员管理
        case 3:system("Exit");break;//退出
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Main_Menu();//返回主菜单
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
        case 1://药品入库
        case 2://药品出库
        case 3://库存查询
        case 4:Function_Main_Menu();//返回主菜单
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Medicine_Management_Menu();//返回仓库管理菜单
    }
}


#endif // FUNCTION_H_INCLUDED
