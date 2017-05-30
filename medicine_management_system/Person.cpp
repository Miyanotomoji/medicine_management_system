#include<iostream>
#include"Person.h"
using namespace std;

int Person::count=0;//当前人数
int Person::index=0;//历史合计人数
Person::Person(int t_number,string t_name,int t_age)
{
    number=t_number;
    name=t_name;
    age=t_age;
    accessiblity=true;
}
Person::Person(Person &t_Person)
{
    number=t_Person.number;
    name=t_Person.name;
    age=t_Person.age;
    accessiblity=t_Person.accessiblity;
}
Person::Person()
{
    accessiblity=true;
}
void Person::Delete(int index)
{
    accessiblity=false;
    count--;
}
void Person::Print()//输出
{
    cout<<"\t\t"<<number<<"\t\t"<<name<<"\t\t"<<age<<endl;
}
bool Person::Judge()//判断是否删除
{
    return accessiblity;
}
Person::~Person()
{

}
int Person::getNumber()
{
    return number;
}
