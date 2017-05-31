#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include<iostream>
#include"Menu.h"
#include"Array.h"
extern ArrayOfPersons A;//声明外部对象

using namespace std;

void Function_Person_Menu()//人员管理菜单的功能实现
{
    system("cls");
    Person_Menu();//主菜单的界面
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=4)
    {
        switch(temp)
        {
        case 1: Function_Person_Menu_1();break;
        case 2: Function_Person_Menu_1();break;
        case 3: Function_Person_Menu_1();break;
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
        Function_Person_Menu();//返回人员管理菜单
    }
}
void Function_Person_Menu_1()//人员管理菜单的子菜单的功能实现
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
            Function_Person_Menu();//返回人员管理菜单
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Person_Menu_1();//返回人员管理菜单的子菜单
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
        case 1:Function_Medice_Manager_Menu();//库存管理
        case 2:Function_Person_Menu();break;//人员管理
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
void Function_Medice_Manager_Menu()
{
    system("cls");
    Medice_Manager_Menu();
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
        Function_Medice_Manager_Menu();//返回仓库管理菜单
    }
}
void Add_input()//添加Person
{
    int age;
    string name;
    int number;
    int authority;
    cout<<"☆编号:";
    cin>>number;
    cout<<"☆姓名:";
    cin>>name;
    cout<<"☆年龄:";
    cin>>age;
    cout<<"请输入你的身份对应的编号:<1>员工 <2>顾客 <3>供销商."<<endl;
    cout<<"☆身份:";
    cin>>authority;
    if(authority!=1&&authority!=2&&authority!=3)
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Person_Menu_1();
    }
    A.Add(number,name,age,authority);
    system("pause");
    Function_Person_Menu_1();//返回人员管理菜单的子菜单
}
void Show_input()//查询Person
{
    int  number;
    cout<<"☆编号:";
    cin>>number;
    A.Show(number);
    system("pause");
    Function_Person_Menu_1();//返回人员管理菜单的子菜单
}
void Delete_input()//删除Person
{
    int number;
    cout<<"☆编号:";
    cin>>number;
    A.Delete(number);
    system("pause");
    Function_Person_Menu_1();//返回人员管理菜单的子菜单
}

bool checkAuthority()

#endif // FUNCTION_H_INCLUDED
