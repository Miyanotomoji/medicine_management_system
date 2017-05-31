#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<string>
#include"ArrayOfPersons.h"
#include"All User.h"
const int maxn=10000;
using namespace std;
class ArrayOfPersons;
class Person:public User
{
public:
    Person();
    Person(int t_number,string t_name,int t_age,int t_authority);
    Person(Person &t_Person);
    ~Person();
    void Delete(int index);//ɾ��
    void Print();//���
    bool Judge();//�ж��Ƿ�ɾ��
    friend ArrayOfPersons;
    static int index;//��ʷ����
    static int count;//��ǰ����
    int getNumber();//����number
private:
    string name;
    int number;
    int age;
    bool accessiblity;
    int authority;
};

#endif // PERSON_H_INCLUDED
