#include"All User.h"
#include<iostream>

using namespace std;

int User::count=0;
User::User(){}
User::User(string t_account,string t_password)//User��Ĺ��캯��
    {
        account=t_account;
        password=t_password;
        cout<<"�����ɹ�"<<endl;
        count++;
    }
User::User(User &t_User)//User��Ŀ������캯��
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
void User::Delete()//ɾ���û�
{

}
static void showAllUser()//��ʾ�����û�
{

}
User::~User()
{
    count--;
    cout<<"ɾ���ɹ�"<<endl;
}
/*////////////////////////�ֽ���//////////////////////////////////*/
Admin::Admin():User()
{}
Admin::Admin(string t_account,string t_password):User(t_account,t_password)
{}
Admin::Admin(Admin &t_Admin):User(t_Admin)
{}
/*////////////////////////�ֽ���//////////////////////////////////*/
Manager::Manager():User()
{}
Manager::Manager(string t_account,string t_password):User(t_account,t_password)
{}
Manager::Manager(Manager &t_Manager):User(t_Manager)
{}
/*////////////////////////�ֽ���//////////////////////////////////*/
Warehouse::Warehouse():User()
{}
Warehouse::Warehouse(string t_account,string t_password):User(t_account,t_password)
{}
Warehouse::Warehouse(Warehouse &t_Warehouse):User(t_Warehouse)
{}







