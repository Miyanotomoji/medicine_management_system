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
    void Delete();									//删除用户
    static void showAllUser();
protected:
    int authority;									//权限等级
    string account;									//用户名
    string password;								//密码
    static int count;								//当前用户个数
};

class Admin:public User								//系统管理员
{
public:
    Admin();
    Admin(string t_account,string t_password);
    ~Admin();
    Admin(Admin &t_Admin);
};

class Manager:public User							//工作人员
{
    Manager();
    Manager(string t_account,string t_password);
    ~Manager();
    Manager(Manager &t_Manager);
};

class Warehouse:public User							//仓库管理人员
{
    Warehouse();
    Warehouse(string t_account,string t_password);
    ~Warehouse();
    Warehouse(Warehouse &t_Warehouse);
};
#endif												// ALL_USER_H_INCLUDED
