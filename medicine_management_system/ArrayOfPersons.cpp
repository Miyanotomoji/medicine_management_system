#include<bits/stdc++.h>
#include"ArrayOfPersons.h"
#include"Person.h"
using namespace std;

ArrayOfPersons::ArrayOfPersons()//���캯��
{
    Persons=new Person[1000];
}
ArrayOfPersons::~ArrayOfPersons()//��������
{
    delete[]Persons;
}
void ArrayOfPersons::Add(int t_number,string t_name,int t_age,int t_authority)//���
{
    Person* p=new Person(t_number,t_name,t_age,t_authority);
    Persons[Person::index]=*p;
    Person::index++;
    Person::count++;
    cout<<"��ӳɹ�"<<endl;
}
void ArrayOfPersons::Delete(int t_number)//ɾ��
{
    int index=Find(t_number);
    if(index!=-1)
        Persons[index].Delete(index);
    else
        cout<<"No User!"<<endl;
}
void ArrayOfPersons::Show(int t_number)//��ѯ
{
    int index=Find(t_number);
    if(index!=-1)
    {
        cout<<"\t\t���\t\t����\t\t����\t\t���\t\t"<<endl;
        Persons[index].Print();
    }
    else
        cout<<"No User!"<<endl;
}
int ArrayOfPersons::Find(int t_number)//����number�����û��ڶ�̬�������е��±�
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
void ArrayOfPersons::ShowAllPerson()//��������û�����Ϣ
{
    cout<<"There are "<<Person::count<<"persons"<<endl;
    cout<<"\t\t���\t\t����\t\t����\t\t���\t\t"<<endl;
    for(int i=0;i<Person::index;i++)
    {
        if(Persons[i].Judge()!=false)
            Persons[i].Print();
    }
}

