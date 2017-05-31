#include<iostream>
#include<string>
#include"Personnel.h"

using std::cout;
using std::endl;
using std::string;

int Personnel::count=0;//当前人数
int Personnel::index=0;//历史合计人数
Personnel::Personnel(int t_number,string t_name,int t_age,int t_authority)//Personnel类的构造函数
{
    number=t_number;
    name=t_name;
    age=t_age;
    accessiblity=true;
    authority=t_authority;
}
Personnel::Personnel(Personnel &t_Personnel)//Personnel类的拷贝构造函数
{
    number=t_Personnel.number;
    name=t_Personnel.name;
    age=t_Personnel.age;
    accessiblity=t_Personnel.accessiblity;
    authority=t_Personnel.authority;
}
Personnel::Personnel()//Personnel类的构造函数
{
    accessiblity=true;
}
void Personnel::Delete(int index)//删除
{
    accessiblity=false;
    cout<<"删除成功"<<endl;
    count--;
}
void Personnel::Print()//输出
{
    cout<<"\t\t"<<number<<"\t\t"<<name<<"\t\t"<<age;
    if(authority==1)
        cout<<"\t\t员工"<<endl;
    else if(authority==2)
        cout<<"\t\t顾客"<<endl;
    else
        cout<<"\t\t经销商"<<endl;
}
bool Personnel::Judge()//判断是否删除
{
    return accessiblity;
}
Personnel::~Personnel()//析构函数
{}
int Personnel::getNumber()//返回number
{
    return number;
}
