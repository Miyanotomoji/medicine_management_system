#ifndef ALL_USERS
#define ALL_USERS
#pragma once

#include<string>
#include"Array.h"

#define IS_ADMIN 1
#define IS_MANAGER 2
#define IS_WAREHOUSE 3

#define SHOW_TITLES 0
#define NO_SHOW_TITLES 1
#define ONLY_SHOW_TITLES 3

const int MAX_RECORD = 100;

using std::string;

class User
{
public:
	User() {}
	User(string t_account, string t_password, int userType);
	User(User & t_user);
	friend class ArrayOfUser;
private:
	int authority;
	int number;
	string account;
	string password;
	int index;
	bool accessibility;
	bool is_login;
};








#endif
