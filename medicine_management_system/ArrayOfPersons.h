#ifndef ARRAYOFPERSONS_H_INCLUDED
#define ARRAYOFPERSONS_H_INCLUDED
#include<string>
#include"Person.h"
using namespace std;
class Person;
class ArrayOfPersons
{
public:
    ArrayOfPersons();
    ~ArrayOfPersons();
    void Add(int t_number,string t_name,int t_age);
    void Show(int index);
    void Delete(int index);
    void ShowAllPerson();
    int Find(int t_number);
private:
    Person* Persons;//指向动态数组首地址
};

#endif // ARRAYOFPERSONS_H_INCLUDED
