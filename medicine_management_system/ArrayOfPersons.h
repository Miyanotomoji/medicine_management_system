#ifndef ARRAYOFPERSONS_H_INCLUDED
#define ARRAYOFPERSONS_H_INCLUDED
#include<string>
#include"Person.h"
using namespace std;
class Person;
class ArrayOfPersons
{
public:
    ArrayOfPersons();//���캯��
    ~ArrayOfPersons();//��������
    void Add(int t_number,string t_name,int t_age,int t_authortiy);//���
    void Show(int index);//��ѯ
    void Delete(int index);//ɾ��
    void ShowAllPerson();//��������û�����Ϣ
    int Find(int t_number);//����number�����û��ڶ�̬�������е��±�
private:
    Person* Persons;//ָ��̬�����׵�ַ
};

#endif // ARRAYOFPERSONS_H_INCLUDED
