#include<iostream>
#include"ArrayOfPersons.h"
#include"Person.h"
using namespace std;

ArrayOfPersons::ArrayOfPersons()
{
    Persons=new Person[100];
}
ArrayOfPersons::~ArrayOfPersons()
{
    delete[]Persons;
}
void ArrayOfPersons::Add(int t_number,string t_name,int t_age)
{
    Person* p=new Person(t_number,t_name,t_age);
    Persons[Person::index]=*p;
    Person::index++;
    Person::count++;
    cout<<"添加成功"<<endl;
    delete[]p;
}
void ArrayOfPersons::Delete(int t_number)
{
    int index=Find(t_number);
    if(index!=-1)
        Persons[index].Delete(index);
    else
        cout<<"No User!"<<endl;
}
void ArrayOfPersons::Show(int t_number)
{
    int index=Find(t_number);
    if(index!=-1)
    {
        cout<<"\t\t编号\t\t姓名\t\t年龄\t\t"<<endl;
        Persons[index].Print();
    }
    else
        cout<<"No User!"<<endl;
}
int ArrayOfPersons::Find(int t_number)//按照number查找下标
{
    int temp=-1;
    for(int i=0;i<Person::index;i++)
    {
        if(Persons[i].getNumber()==t_number&&Persons[i].Judge()!=false)
        {
            temp=i;
            break;
        }
    }
    return temp;
}
void ArrayOfPersons::ShowAllPerson()
{
    cout<<"There are "<<Person::count<<"persons"<<endl;
    cout<<"\t\t编号\t\t姓名\t\t年龄\t\t"<<endl;
    for(int i=0;i<Person::index;i++)
    {
        if(Persons[i].Judge()!=false)
            Persons[i].Print();
    }
}

