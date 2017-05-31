#include<bits/stdc++.h>
#include"Person.h"
using namespace std;

int Person::count=0;//当前人数
int Person::index=0;//历史合计人数
Person::Person(int t_number,string t_name,int t_age,int t_authority)//Person类的构造函数
{
    number=t_number;
    name=t_name;
    age=t_age;
    accessiblity=true;
    authority=t_authority;
}
Person::Person(Person &t_Person)//Person类的拷贝构造函数
{
    number=t_Person.number;
    name=t_Person.name;
    age=t_Person.age;
    accessiblity=t_Person.accessiblity;
    authority=t_Person.authority;
}
Person::Person()//Person类的构造函数
{
    accessiblity=true;
}
void Person::Delete(int index)//删除
{
    accessiblity=false;
    cout<<"删除成功"<<endl;
    count--;
}
void Person::Print()//输出
{
    cout<<"\t\t"<<number<<"\t\t"<<name<<"\t\t"<<age;
    if(authority==1)
        cout<<"\t\t员工"<<endl;
    else if(authority==2)
        cout<<"\t\t顾客"<<endl;
    else
        cout<<"\t\t经销商"<<endl;
}
bool Person::Judge()//判断是否删除
{
    return accessiblity;
}
Person::~Person()//析构函数
{}
int Person::getNumber()//返回number
{
    return number;
}
