#ifndef ARRAYOFPERSONNEL_H
#define ARRAYOFPERSONNEL_H

#include"Personnel.h"

class Person;
class ArrayOfPersonnel
{
public:
    ArrayOfPersonnel();//���캯��
    ~ArrayOfPersonnel();//��������
    void Add(int t_number,string t_name,int t_age,int t_authortiy);//���
    void Show(int index);//��ѯ
    void Delete(int index);//ɾ��
    void ShowAllPerson();//��������û�����Ϣ
    int Find(int t_number);//����number�����û��ڶ�̬�������е��±�
private:
    Person* Personnel;//ָ��̬�����׵�ַ
};

#endif // ARRAYOFPERSONNEL_H
