#include"All User.h"
#include<bits/stdc++.h>
using namespace std;

int User::count=0;
User::User(){}//User��Ĺ��캯��
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
    count--;
    cout<<"ɾ���ɹ�"<<endl;
}
static void showAllUser()//��ʾ�����û�
{

}
User::~User()//��������
{

}
/*////////////////////////�ֽ���//////////////////////////////////*/
Admin::Admin():User()//Admin��Ĺ��캯��
{}
Admin::Admin(string t_account,string t_password):User(t_account,t_password)//Admin��Ĺ��캯��
{}
Admin::Admin(Admin &t_Admin):User(t_Admin)//Admin��Ŀ������캯��
{}
/*////////////////////////�ֽ���//////////////////////////////////*/
Manager::Manager():User()//Manager��Ĺ��캯��
{}
Manager::Manager(string t_account,string t_password):User(t_account,t_password)//Manager��Ĺ��캯��
{}
Manager::Manager(Manager &t_Manager):User(t_Manager)//Manager��Ĺ��캯��
{}
/*////////////////////////�ֽ���//////////////////////////////////*/
Warehouse::Warehouse():User()//Warehouse��Ĺ��캯��
{}
Warehouse::Warehouse(string t_account,string t_password):User(t_account,t_password)//��Ĺ��캯��
{}
Warehouse::Warehouse(Warehouse &t_Warehouse):User(t_Warehouse)//Warehouse��Ĺ��캯��
{}







