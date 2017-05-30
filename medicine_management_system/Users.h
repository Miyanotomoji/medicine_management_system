#ifndef ALL_USERS
#define ALL_USERS
#pragma once

#include<string>

using std::string;

class User
{
private:
	int authority;
	string account;
	string password;
	bool accessibility;
	static int count;

public:
	User() {}
	User(string t_account, string t_password);
	User(User & t_user);
	void create(string t_account, string t_password);
	void Delete();
	bool checkAuthority();
	static void showAllUsers();
	static bool checkAdmin();
	~User();
};








#endif
