#ifndef PERSONNEL_H
#define PERSONNEL_H

#include<string>
#include"Array.h"
#include"Users.h"

using std::string;

const int maxn=10000;

class ArrayOfPersonnel;
class Personnel
{
public:
    Personnel();
    Personnel(int t_number,string t_name,int t_age,int t_authority);
    Personnel(Personnel &t_Personnel);
    ~Personnel();
    void Delete(int index);//ɾ��
    void Print();//���
    bool Judge();//�ж��Ƿ�ɾ��
    friend ArrayOfPersonnel;
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

#endif // PERSONNEL_H