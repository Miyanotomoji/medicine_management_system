#include<iostream>
#include"Array.h"
#include"function.h"
#include"Menu.h"

using namespace std;

ArrayOfPersonnel A;//�����ⲿ����

int main()
{
	Array::login(IS_ADMIN);
	system("color 1A");
	Function_Main_Menu();
	return 0;
}
