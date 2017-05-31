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
	void create(string t_account, string t_password, int userType);
	void Delete();
	void show(int mode);
	int checkAuthority();
	static void showAllUsers();
	static bool checkAdmin();
	static void swap(User* a, User* b);
	friend class ArrayOfUser;
private:
	int authority;
	string account;
	string password;
	int index;
	bool accessibility;
	bool is_login;
	static int count_all;
	static int count_admin;
	static int count_manager;
	static int count_warehouse;
	static bool adminExisted;
	//static User **total_index;
};








#endif
