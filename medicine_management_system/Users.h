#ifndef ALL_USERS
#define ALL_USERS
#pragma once

#include<string>

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
private:
	int authority;
	string account;
	string password;
	bool accessibility;
	int index;
	static int count;
	static bool adminExisted;
	static User **total_index;

public:
	User() {}
	User(string t_account, string t_password, int userType);
	User(User & t_user);
	void create(string t_account, string t_password, int userType);
	void Delete();
	int checkAuthority();
	static void showAllUsers();
	void show(int mode);
	static bool checkAdmin();
	static void swap(User* a, User* b);
};








#endif
