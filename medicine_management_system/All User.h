#ifndef ALL_USER_H_INCLUDED
#define ALL_USER_H_INCLUDED

#include<string>

using namespace std;

class User
{
public:
    User();
    User(string t_account,string t_password);
    ~User();
    User(User &t_User);
    void Create(string t_account,string t_password);
    void Delete();									//ɾ���û�
    static void showAllUser();
protected:
    int authority;									//Ȩ�޵ȼ�
    string account;									//�û���
    string password;								//����
    static int count;								//��ǰ�û�����
};

class Admin:public User								//ϵͳ����Ա
{
public:
    Admin();
    Admin(string t_account,string t_password);
    ~Admin();
    Admin(Admin &t_Admin);
};

class Manager:public User							//������Ա
{
    Manager();
    Manager(string t_account,string t_password);
    ~Manager();
    Manager(Manager &t_Manager);
};

class Warehouse:public User							//�ֿ������Ա
{
    Warehouse();
    Warehouse(string t_account,string t_password);
    ~Warehouse();
    Warehouse(Warehouse &t_Warehouse);
};
#endif												// ALL_USER_H_INCLUDED
