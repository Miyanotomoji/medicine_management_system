#ifndef ARRAYOFPERSONS_H_INCLUDED
#define ARRAYOFPERSONS_H_INCLUDED
#include<string>
#include"Person.h"
using namespace std;
class Person;
class ArrayOfPersons
{
public:
    ArrayOfPersons();//构造函数
    ~ArrayOfPersons();//析构函数
    void Add(int t_number,string t_name,int t_age,int t_authortiy);//添加
    void Show(int index);//查询
    void Delete(int index);//删除
    void ShowAllPerson();//输出所有用户的信息
    int Find(int t_number);//按照number查找用户在动态数组类中的下表
private:
    Person* Persons;//指向动态数组首地址
};

#endif // ARRAYOFPERSONS_H_INCLUDED
