#include<iostream>
#include<string>
#include"Array.h"
#include"Personnel.h"

using namespace std;

ArrayOfPersonnel::ArrayOfPersonnel()//构造函数
{
    Personnel=new Personnel[1000];
}
ArrayOfPersonnel::~ArrayOfPersonnel()//析构函数
{
	delete[]Personnel;
}
void ArrayOfPersonnel::Add(int t_number,string t_name,int t_age,int t_authority)//添加
{
	Personnel* p = new Personnel(t_number, t_name, t_age, t_authority);
	Personnel[Personnel::index] = *p;
	Personnel::index++;
	Personnel::count++;
	cout << "添加成功" << endl;
}
void ArrayOfPersonnel::Delete(int t_number)//删除
{
    int index=Find(t_number);
    if(index!=-1)
        Personnel[index].Delete(index);
    else
        cout<<"No User!"<<endl;
}
void ArrayOfPersonnel::Show(int t_number)//查询
{
    int index=Find(t_number);
    if(index!=-1)
    {
        cout<<"\t\t编号\t\t姓名\t\t年龄\t\t身份\t\t"<<endl;
        Personnel[index].Print();
    }
    else
        cout<<"No User!"<<endl;
}
int ArrayOfPersonnel::Find(int t_number)//按照number查找用户在动态数组类中的下表
{
    int temp=-1;
    for(int i=0;i<Person::index;i++)
    {
        if(Personnel[i].getNumber()==t_number&&Personnel[i].Judge()!=false)
        {
            temp=i;
            break;
        }
    }
    return temp;
}
void ArrayOfPersonnel::ShowAllPerson()//输出所有用户的信息
{
    cout<<"There are "<<Person::count<<"Personnel"<<endl;
    cout<<"\t\t编号\t\t姓名\t\t年龄\t\t身份\t\t"<<endl;
    for(int i=0;i<Person::index;i++)
    {
        if(Personnel[i].Judge()!=false)
            Personnel[i].Print();
    }
}

