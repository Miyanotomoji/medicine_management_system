#include<string>
#include<iostream>
#include<iomanip>
#include"Array.h"

using std::string;
using std::cout;
using std::endl;
using std::setw;

int Array::numArrayOfMedicine = 0;
int Array::numArrayOfPersonnel = 0;
int Array::numArrayOfUser = 0;

// BASE CLASS Array
Array::Array(Array & t_array)
{
	numArrayOfMedicine = t_array.numArrayOfMedicine;
	numArrayOfPersonnel = t_array.numArrayOfPersonnel;
}

void Array::modifyArray(int n, int type)
{
	switch (type)
	{
	case MEDICINE:
		numArrayOfMedicine += n;
		break;

	case PERSONNEL:
		numArrayOfPersonnel += n;
		break;

	case USER:
		numArrayOfUser += n;
		break;
	}
}
/////////////////////////////////////////////////
// DERIVED CLASS ArrayOfMedicine
ArrayOfMedicine::ArrayOfMedicine()
{
	medicine = new Medicine[MAX_RECORD];
	record_index = 0;
	num_of_medicine = 0;
	modifyArray(1, MEDICINE);
}

ArrayOfMedicine::ArrayOfMedicine(int n)
{
	medicine = new Medicine[n];
	modifyArray(1, MEDICINE);
}

ArrayOfMedicine::ArrayOfMedicine(ArrayOfMedicine & array_of_medicine)
{
	// need to copy all the contents? or simply the header?
	record_index = array_of_medicine.record_index;
	medicine = new Medicine[MAX_RECORD];
	for (int i = 0; i < record_index; i++)
	{
		medicine[i].name = array_of_medicine.medicine[i].name;
		medicine[i].number = array_of_medicine.medicine[i].number;
		medicine[i].amount = array_of_medicine.medicine[i].amount;
		medicine[i].price = array_of_medicine.medicine[i].price;
		medicine[i].accessibility = array_of_medicine.medicine[i].accessibility;
	}
}

ArrayOfMedicine::~ArrayOfMedicine()
{
	modifyArray(-1, MEDICINE);
}

void ArrayOfMedicine::Add(int t_number, string t_name, int t_amount, double t_price)
{
	if (record_index > 900)
	{
		cout << "Storage not enough, only " << 1000 - record_index << "records available." << endl;
	}
	medicine[record_index].number = t_number;
	medicine[record_index].name = t_name;
	medicine[record_index].amount = t_amount;
	medicine[record_index].price = t_price;
	medicine[record_index].accessibility = true;
	medicine[record_index].index = record_index;
	record_index++;
}

void ArrayOfMedicine::Delete(int index)
{
	// do not subtract record_index until the dedicine array is about to be filled
	medicine[index].accessibility = false;
}

void ArrayOfMedicine::Show(int index, int mode)
{
	switch (mode)
	{
	case SHOW_TITLES:
		cout << setw(10) << "NO" << setw(10) << "NAME" << setw(10) << "AMOUNT" << setw(10) << "PRICE" << endl;
		cout << "----------------------------------------" << endl;
		cout << setw(10) << medicine[index].number << setw(10) << medicine[index].name << setw(10) << medicine[index].amount << setw(10) << medicine[index].price << endl;
		break;

	case NO_SHOW_TITLES:
		cout << setw(10) << medicine[index].number << setw(10) << medicine[index].name << setw(10) << medicine[index].amount << setw(10) << medicine[index].price << endl;
		break;

	case ONLY_SHOW_TITLES:
		cout << setw(10) << "NO" << setw(10) << "NAME" << setw(10) << "AMOUNT" << setw(10) << "PRICE" << endl;
		cout << "----------------------------------------" << endl;
		break;
	}
}

void ArrayOfMedicine::ShowAllMedicine()
{
	Show(NULL, ONLY_SHOW_TITLES);	// is this safe?
	for (int i = 0; i < record_index; i++)
	{
		if (medicine[i].accessibility == true)
		{
			Show(i, NO_SHOW_TITLES);
		}
	}
}

int ArrayOfMedicine::FindIndex(int t_number)
{
	for (int i = 0; i < record_index; i++)
	{
		if (medicine[i].accessibility == true && medicine[i].number == t_number)
		{
			return medicine[i].index;
		}
	}
}

int ArrayOfMedicine::calNumberOfMedicine()
{
	for (int i = 0; i < record_index; i++)
	{
		if (medicine[i].accessibility == true)
		{
			num_of_medicine++;
		}
	}

	return num_of_medicine;
}
///////////////////////////////////////////////////
// DERIVED CLASS ArrayOfUser
ArrayOfUser::ArrayOfUser()
{
	user = new User[MAX_RECORD];
	record_index = 0;
	num_of_user = 0;
	modifyArray(1, USER);
}

ArrayOfUser::ArrayOfUser(int n)
{
	user = new User[n];
	modifyArray(1, USER);
}

ArrayOfUser::ArrayOfUser(ArrayOfUser & array_of_user)
{
	// need to copy all the contents? or simply the header?
	record_index = array_of_user.record_index;
	user = new User[MAX_RECORD];
	for (int i = 0; i < record_index; i++)
	{
		user[i].authority = array_of_user.user[i].authority;
		user[i].account = array_of_user.user[i].account;
		user[i].password = array_of_user.user[i].password;
		user[i].accessibility = array_of_user.user[i].accessibility;
		record_index++;
	}
}

ArrayOfUser::~ArrayOfUser()
{
	modifyArray(-1, USER);
}

void ArrayOfUser::Add(int t_authority, int t_number, string t_account, string t_password)
{
	if (record_index > 900)
	{
		cout << "Storage not enough, only " << 1000 - record_index << "records available." << endl;
	}

	user[record_index].authority = t_authority;
	user[record_index].number = t_number;
	user[record_index].account = t_account;
	user[record_index].password = t_password;
	user[record_index].accessibility = true;
	user[record_index].index = record_index;
	record_index++;
}

void ArrayOfUser::Delete(int index)
{
	// do not subtract record_index until the dedicine array is about to be filled
	user[index].accessibility = false;
}

void ArrayOfUser::Show(int index, int mode)
{
	switch (mode)
	{
	case SHOW_TITLES:
		cout << setw(10) << "AUTHORITY" << setw(10) << "ACCOUNT" << endl;		// what about developing a password protecting system, which includes find my password, etc.
		cout << setw(10) << user[index].authority << setw(10) << user[index].account << endl;
		break;

	case NO_SHOW_TITLES:
		cout << setw(10) << user[index].authority << setw(10) << user[index].account << endl;
		break;

	case ONLY_SHOW_TITLES:
		cout << setw(10) << "AUTHORITY" << setw(10) << "ACCOUNT" << endl;
		break;
	}
}

void ArrayOfUser::ShowAllUser()
{
	Show(NULL, ONLY_SHOW_TITLES);	// is this safe?
	for (int i = 0; i < record_index; i++)
	{
		if (user[i].accessibility == true)
		{
			Show(i, NO_SHOW_TITLES);
		}
	}
}

int ArrayOfUser::FindIndex(int t_number)
{
	for (int i = 0; i < record_index; i++)
	{
		if (user[i].accessibility == true && user[i].number == t_number)
		{
			return user[i].index;
		}
	}
}

int ArrayOfUser::calNumberOfUser()
{
	for (int i = 0; i < record_index; i++)
	{
		if (user[i].accessibility == true)
		{
			num_of_user++;
		}
	}

	return num_of_user;
}

int ArrayOfUser::checkAuthority()
{
	for (int i = 0; i < record_index; i++)
	{
		if (user[i].accessibility == true && user[i].is_login == true)
		{
			return user[i].authority;
		}
	}
}

/////////////////////////////////////////
// DERIVED CLASS ArrayOfPersonnel
ArrayOfPersonnel::ArrayOfPersonnel()
{
	personnel = new Personnel[MAX_RECORD];
	record_index = 0;
	num_of_personnel = 0;
	modifyArray(1, PERSONNEL);
}

ArrayOfPersonnel::ArrayOfPersonnel(int n)
{
	personnel = new Personnel[n];
	modifyArray(1, PERSONNEL);
}

ArrayOfPersonnel::ArrayOfPersonnel(ArrayOfPersonnel & array_of_personnel)
{
	// need to copy all the contents? or simply the header?
	record_index = array_of_personnel.record_index;
	personnel = new Personnel[MAX_RECORD];
	for (int i = 0; i < record_index; i++)
	{
		personnel[i].number = array_of_personnel.personnel[i].number;
		personnel[i].name = array_of_personnel.personnel[i].name;
		personnel[i].age = array_of_personnel.personnel[i].age;
		personnel[i].identity = array_of_personnel.personnel[i].identity;
		personnel[i].accessiblity = array_of_personnel.personnel[i].accessiblity;
		record_index++;
	}
}

