#include"All User.h"
#include<bits/stdc++.h>
using namespace std;

int User::count=0;
User::User(){}//User类的构造函数
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
    count--;
    cout<<"删除成功"<<endl;
}
static void showAllUser()//显示所有用户
{

}
User::~User()//析构函数
{

}
/*////////////////////////分界线//////////////////////////////////*/
Admin::Admin():User()//Admin类的构造函数
{}
Admin::Admin(string t_account,string t_password):User(t_account,t_password)//Admin类的构造函数
{}
Admin::Admin(Admin &t_Admin):User(t_Admin)//Admin类的拷贝构造函数
{}
/*////////////////////////分界线//////////////////////////////////*/
Manager::Manager():User()//Manager类的构造函数
{}
Manager::Manager(string t_account,string t_password):User(t_account,t_password)//Manager类的构造函数
{}
Manager::Manager(Manager &t_Manager):User(t_Manager)//Manager类的构造函数
{}
/*////////////////////////分界线//////////////////////////////////*/
Warehouse::Warehouse():User()//Warehouse类的构造函数
{}
Warehouse::Warehouse(string t_account,string t_password):User(t_account,t_password)//类的构造函数
{}
Warehouse::Warehouse(Warehouse &t_Warehouse):User(t_Warehouse)//Warehouse类的构造函数
{}







