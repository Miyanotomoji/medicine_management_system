#include<string>
#include"Array.h"

using std::string;

int Array::numArrayOfMedicine = 0;
int Array::numArrayOfPersonnel = 0;
int ArrayOfMedicine::numArrayOfMedicine = 0;

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
	}
}

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
		record_index++;
	}
}

ArrayOfMedicine::~ArrayOfMedicine()
{
	modifyArray(-1, MEDICINE);
}

void ArrayOfMedicine::Add(int t_number, string t_name, int t_amount, double t_price)
{
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

int ArrayOfMedicine::calNumberOfMedicine()
{
	for (int i = 0; i < num_of_medicine; i++)
	{
		if (medicine[i].accessibility == true)
		{
			num_of_medicine++;
		}
	}

	return num_of_medicine;
}

