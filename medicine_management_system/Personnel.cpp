#include<iostream>
#include<string>
#include"Personnel.h"

using std::cout;
using std::endl;
using std::string;

int Personnel::count=0;//��ǰ����
int Personnel::index=0;//��ʷ�ϼ�����
Personnel::Personnel(int t_number,string t_name,int t_age,int t_authority)//Personnel��Ĺ��캯��
{
    number=t_number;
    name=t_name;
    age=t_age;
    accessiblity=true;
    authority=t_authority;
}
Personnel::Personnel(Personnel &t_Personnel)//Personnel��Ŀ������캯��
{
    number=t_Personnel.number;
    name=t_Personnel.name;
    age=t_Personnel.age;
    accessiblity=t_Personnel.accessiblity;
    authority=t_Personnel.authority;
}
Personnel::Personnel()//Personnel��Ĺ��캯��
{
    accessiblity=true;
}
void Personnel::Delete(int index)//ɾ��
{
    accessiblity=false;
    cout<<"ɾ���ɹ�"<<endl;
    count--;
}
void Personnel::Print()//���
{
    cout<<"\t\t"<<number<<"\t\t"<<name<<"\t\t"<<age;
    if(authority==1)
        cout<<"\t\tԱ��"<<endl;
    else if(authority==2)
        cout<<"\t\t�˿�"<<endl;
    else
        cout<<"\t\t������"<<endl;
}
bool Personnel::Judge()//�ж��Ƿ�ɾ��
{
    return accessiblity;
}
Personnel::~Personnel()//��������
{}
int Personnel::getNumber()//����number
{
    return number;
}
