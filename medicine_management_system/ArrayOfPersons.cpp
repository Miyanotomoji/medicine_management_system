#include<bits/stdc++.h>
#include"ArrayOfPersons.h"
#include"Person.h"
using namespace std;

ArrayOfPersons::ArrayOfPersons()//构造函数
{
    Persons=new Person[1000];
}
ArrayOfPersons::~ArrayOfPersons()//析构函数
{
    delete[]Persons;
}
void ArrayOfPersons::Add(int t_number,string t_name,int t_age,int t_authority)//添加
{
    Person* p=new Person(t_number,t_name,t_age,t_authority);
    Persons[Person::index]=*p;
    Person::index++;
    Person::count++;
    cout<<"添加成功"<<endl;
}
void ArrayOfPersons::Delete(int t_number)//删除
{
    int index=Find(t_number);
    if(index!=-1)
        Persons[index].Delete(index);
    else
        cout<<"No User!"<<endl;
}
void ArrayOfPersons::Show(int t_number)//查询
{
    int index=Find(t_number);
    if(index!=-1)
    {
        cout<<"\t\t编号\t\t姓名\t\t年龄\t\t身份\t\t"<<endl;
        Persons[index].Print();
    }
    else
        cout<<"No User!"<<endl;
}
int ArrayOfPersons::Find(int t_number)//按照number查找用户在动态数组类中的下表
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
void ArrayOfPersons::ShowAllPerson()//输出所有用户的信息
{
    cout<<"There are "<<Person::count<<"persons"<<endl;
    cout<<"\t\t编号\t\t姓名\t\t年龄\t\t身份\t\t"<<endl;
    for(int i=0;i<Person::index;i++)
    {
        if(Persons[i].Judge()!=false)
            Persons[i].Print();
    }
}

