#include<iostream>
#include<string>
#include"Array.h"
#include"Personnel.h"

using namespace std;

ArrayOfPersonnel::ArrayOfPersonnel()//���캯��
{
    Personnel=new Personnel[1000];
}
ArrayOfPersonnel::~ArrayOfPersonnel()//��������
{
	delete[]Personnel;
}
void ArrayOfPersonnel::Add(int t_number,string t_name,int t_age,int t_authority)//���
{
	Personnel* p = new Personnel(t_number, t_name, t_age, t_authority);
	Personnel[Personnel::index] = *p;
	Personnel::index++;
	Personnel::count++;
	cout << "��ӳɹ�" << endl;
}
void ArrayOfPersonnel::Delete(int t_number)//ɾ��
{
    int index=Find(t_number);
    if(index!=-1)
        Personnel[index].Delete(index);
    else
        cout<<"No User!"<<endl;
}
void ArrayOfPersonnel::Show(int t_number)//��ѯ
{
    int index=Find(t_number);
    if(index!=-1)
    {
        cout<<"\t\t���\t\t����\t\t����\t\t���\t\t"<<endl;
        Personnel[index].Print();
    }
    else
        cout<<"No User!"<<endl;
}
int ArrayOfPersonnel::Find(int t_number)//����number�����û��ڶ�̬�������е��±�
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
void ArrayOfPersonnel::ShowAllPerson()//��������û�����Ϣ
{
    cout<<"There are "<<Person::count<<"Personnel"<<endl;
    cout<<"\t\t���\t\t����\t\t����\t\t���\t\t"<<endl;
    for(int i=0;i<Person::index;i++)
    {
        if(Personnel[i].Judge()!=false)
            Personnel[i].Print();
    }
}

