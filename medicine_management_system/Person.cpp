#include<bits/stdc++.h>
#include"Person.h"
using namespace std;

int Person::count=0;//��ǰ����
int Person::index=0;//��ʷ�ϼ�����
Person::Person(int t_number,string t_name,int t_age,int t_authority)//Person��Ĺ��캯��
{
    number=t_number;
    name=t_name;
    age=t_age;
    accessiblity=true;
    authority=t_authority;
}
Person::Person(Person &t_Person)//Person��Ŀ������캯��
{
    number=t_Person.number;
    name=t_Person.name;
    age=t_Person.age;
    accessiblity=t_Person.accessiblity;
    authority=t_Person.authority;
}
Person::Person()//Person��Ĺ��캯��
{
    accessiblity=true;
}
void Person::Delete(int index)//ɾ��
{
    accessiblity=false;
    cout<<"ɾ���ɹ�"<<endl;
    count--;
}
void Person::Print()//���
{
    cout<<"\t\t"<<number<<"\t\t"<<name<<"\t\t"<<age;
    if(authority==1)
        cout<<"\t\tԱ��"<<endl;
    else if(authority==2)
        cout<<"\t\t�˿�"<<endl;
    else
        cout<<"\t\t������"<<endl;
}
bool Person::Judge()//�ж��Ƿ�ɾ��
{
    return accessiblity;
}
Person::~Person()//��������
{}
int Person::getNumber()//����number
{
    return number;
}
