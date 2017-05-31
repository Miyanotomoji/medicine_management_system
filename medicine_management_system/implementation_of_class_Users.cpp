#include<iostream>
#include<iomanip>
#include<string>
#include"Users.h"

using std::cout;
using std::endl;
using std::string;
using std::setw;

//int User::count = 0;
int User::count_admin = 0;
int User::count_manager = 0;
int User::count_warehouse = 0;
bool User::adminExisted = false;
//User **User::total_index = new User *[MAX_RECORD];

User::User(string t_account, string t_password, int userType)
{
	account = t_account;
	password = t_password;
	/*if (userType == IS_ADMIN && adminExisted)
	{
		cout << "Administrator already existed, permission denied." << endl;
	}*/										// how to control authority? Maybe I need to create a function later for main.cpp
	authority = userType;

	if (authority == IS_ADMIN)				// create an administrator
	{
		adminExisted == true;
	}

	switch (authority)
	{
	case IS_ADMIN:
		count_admin++;
		break;
		
	case IS_MANAGER:
		count_manager++;
		break;

	case IS_WAREHOUSE:
		count_warehouse++;
		break;
	}

	accessibility = true;
	//index = count;
	//count++;
}

User::User(User & t_user)
{
	account = t_user.account;
	password = t_user.password;
	authority = t_user.authority;
	accessibility = t_user.accessibility;
	//index = count;
	//count++;
}

void User::create(string t_account, string t_password, int userType)
{
	account = t_account;
	password = t_password;
	authority = userType;
	accessibility = true;
	//index = count;
	//count++;
}

/*void User::Delete()
{
	accessibility = false;
	total_index[index] = NULL;
	for (int i = 0; i < count; i++)
	{
		if (total_index[i] == NULL)
		{
			for (int j = i; j < count; j++)
			{
				swap(total_index[j], total_index[j + 1]);
			}
		}
	}			// 保证total_index里面null都在后面，这样下面的count--才能正常工作
				// 这一段亟待修改，这样做速度太慢了
	count--;
}*/

int User::checkAuthority()
{
	return authority;
}

void User::show(int mode)
{
	switch (mode)
	{
	case SHOW_TITLES:
		cout << setw(10) << "Account" << setw(10) << "Authority" << endl;
		cout << "--------------------" << endl;
		cout << setw(10) << account << setw(10) << authority << endl;
		break;

	case NO_SHOW_TITLES:
		cout << setw(10) << account << setw(10) << authority << endl;
		break;

	case ONLY_SHOW_TITLES:
		cout << setw(10) << "Account" << setw(10) << "Authority" << endl;
		cout << "--------------------" << endl;
		break;
	}
}

/*void User::showAllUsers()
{
	for (int i = 0; i < count; i++)
	{
		if (total_index[i] == NULL)
		{
			break;
		}
		cout << setw(10) << "NO" << setw(10) << "NAME" << setw(10) << "AMOUNT" << setw(10) << "PRICE" << endl;
		(*total_index)->show(NO_SHOW_TITLES);
	}
}*/

void User::swap(User* a, User* b)
{
	User* p = NULL;
	a = p;
	p = b;
	b = a;
}

bool User::checkAdmin()
{
	return adminExisted;
}