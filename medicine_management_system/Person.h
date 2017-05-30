#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<string>
#include"ArrayOfPersons.h"
const int maxn=10000;
using namespace std;
class ArrayOfPersons;
class Person
{
public:
    Person();
    Person(int t_number,string t_name,int t_age);
    Person(Person &t_Person);
    ~Person();
    void Delete(int index);//删除
    void Print();//输出
    bool Judge();//判断是否删除
    friend ArrayOfPersons;
    static int index;//历史人数
    static int count;//当前人数
    int getNumber();//返回number
private:
    string name;
    int number;
    int age;
    bool accessiblity;
};

#endif // PERSON_H_INCLUDED
