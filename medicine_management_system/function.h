#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include<iostream>
#include"Menu.h"
#include"ArrayOfPersons.h"
extern ArrayOfPersons A;
using namespace std;
void Function_Person_Menu_1();
void Show_input();
void Delete_input();
void Add_input();
void Function_Person_Menu()
{
    system("cls");
    Person_Menu();
    int temp;
    cin>>temp;
    if(temp>=1||temp<=4)
    {
        switch(temp)
        {
        case 1: Function_Person_Menu_1();break;
        case 2: Function_Person_Menu_1();break;
        case 3: Function_Person_Menu_1();break;
        case 4:
            system("cls");
            MainMenu();
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Person_Menu();
    }
}
void Function_Person_Menu_1()
{
    system("cls");
    Person_Menu_1();
    int temp;
    cin>>temp;
    if(temp>=1||temp<=4)
    {
        switch(temp)
        {
        case 1: Show_input();break;
        case 2: Add_input();break;
        case 3: Delete_input();break;
        case 4:
            system("cls");
            Function_Person_Menu();
            break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        system("cls");
        Function_Person_Menu_1();
    }
}
void Function_Main_Menu()
{
    system("cls");
    MainMenu();
    int temp;
    cin>>temp;
    if(temp>=1&&temp<=5)
    {
        switch(temp)
        {
        case 1:
        case 2:
        case 3:
        case 4:Function_Person_Menu();break;
        case 5:system("exit");break;
        }
    }
    else
    {
        cout<<"Error!"<<endl;
        system("pause");
        Function_Main_Menu();
    }
}
void Add_input()
{
    int age;
    string name;
    int number;
    cout<<"±àºÅ:";
    cin>>number;
    cout<<"ÐÕÃû:";
    cin>>name;
    cout<<"ÄêÁä:";
    cin>>age;
    A.Add(number,name,age);
    system("pause");
    Function_Person_Menu_1();
}
void Show_input()
{
    int  number;
    cin>>number;
    A.Show(number);
    system("pause");
    Function_Person_Menu_1();
}
void Delete_input()
{
    int number;
    cin>>number;
    A.Delete(number);
    system("pause");
    Function_Person_Menu_1();
}
#endif // FUNCTION_H_INCLUDED
