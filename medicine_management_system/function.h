#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include<iostream>
#include"Menu.h"
#include"Array.h"
extern ArrayOfPersons A;//�����ⲿ����

using namespace std;

void Function_Person_Menu()//��Ա����˵��Ĺ���ʵ��
{
    system("cls");
    Person_Menu();//���˵��Ľ���
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
            Function_Main_Menu();//�������˵�
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Person_Menu();//������Ա����˵�
    }
}
void Function_Person_Menu_1()//��Ա����˵����Ӳ˵��Ĺ���ʵ��
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
            Function_Person_Menu();//������Ա����˵�
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Person_Menu_1();//������Ա����˵����Ӳ˵�
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
        case 1:Function_Medice_Manager_Menu();//������
        case 2:Function_Person_Menu();break;//��Ա����
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
        Function_Medice_Manager_Menu();//���زֿ����˵�
    }
}
void Add_input()//���Person
{
    int age;
    string name;
    int number;
    int authority;
    cout<<"����:";
    cin>>number;
    cout<<"������:";
    cin>>name;
    cout<<"������:";
    cin>>age;
    cout<<"�����������ݶ�Ӧ�ı��:<1>Ա�� <2>�˿� <3>������."<<endl;
    cout<<"�����:";
    cin>>authority;
    if(authority!=1&&authority!=2&&authority!=3)
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Person_Menu_1();
    }
    A.Add(number,name,age,authority);
    system("pause");
    Function_Person_Menu_1();//������Ա����˵����Ӳ˵�
}
void Show_input()//��ѯPerson
{
    int  number;
    cout<<"����:";
    cin>>number;
    A.Show(number);
    system("pause");
    Function_Person_Menu_1();//������Ա����˵����Ӳ˵�
}
void Delete_input()//ɾ��Person
{
    int number;
    cout<<"����:";
    cin>>number;
    A.Delete(number);
    system("pause");
    Function_Person_Menu_1();//������Ա����˵����Ӳ˵�
}

bool checkAuthority()

#endif // FUNCTION_H_INCLUDED
