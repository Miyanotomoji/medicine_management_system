#include"All User.h"
#include<iostream>

using namespace std;

int User::count=0;
User::User(){}
User::User(string t_account,string t_password)//User类的构造函数
    {
        account=t_account;
        password=t_password;
        cout<<"创建成功"<<endl;
        count++;
    }
User::User(User &t_User)//User类的拷贝构造函数
{
    authority=t_User.authority;
    account=t_User.account;
    password=t_User.password;
}
void User::Create(string t_account,string t_password)
{
    account=t_account;
    password=t_password;
    count++;
}
void User::Delete()//删除用户
{

}
static void showAllUser()//显示所有用户
{

}
User::~User()
{
    count--;
    cout<<"删除成功"<<endl;
}
/*////////////////////////分界线//////////////////////////////////*/
Admin::Admin():User()
{}
Admin::Admin(string t_account,string t_password):User(t_account,t_password)
{}
Admin::Admin(Admin &t_Admin):User(t_Admin)
{}
/*////////////////////////分界线//////////////////////////////////*/
Manager::Manager():User()
{}
Manager::Manager(string t_account,string t_password):User(t_account,t_password)
{}
Manager::Manager(Manager &t_Manager):User(t_Manager)
{}
/*////////////////////////分界线//////////////////////////////////*/
Warehouse::Warehouse():User()
{}
Warehouse::Warehouse(string t_account,string t_password):User(t_account,t_password)
{}
Warehouse::Warehouse(Warehouse &t_Warehouse):User(t_Warehouse)
{}







