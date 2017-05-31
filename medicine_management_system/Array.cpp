#include<string>
#include"Array.h"

using std::string;

int Array::numArrayOfMedicine = 0;
int Array::numArrayOfPersonnel = 0;
int ArrayOfMedicine::num_of_medicine = 0;

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
		numArrayOfMedicine++;
		break;

	case PERSONNEL:
		numArrayOfPersonnel++;
		break;
	}
}

ArrayOfMedicine::ArrayOfMedicine()
{
	medicine = new Medicine[MAX_RECORD];
	modifyArray(1, MEDICINE);
}

ArrayOfMedicine::ArrayOfMedicine(int n)
{
	medicine = new Medicine[n];
	modifyArray(1, MEDICINE);
}

ArrayOfMedicine::ArrayOfMedicine(ArrayOfMedicine & array_of_medicine)
{
	num_of_medicine = array_of_medicine.num_of_medicine;
	medicine = new Medicine[MAX_RECORD];
	for (int i = 0; i < num_of_medicine; i++)
	{
		medicine[i].name = array_of_medicine.medicine[i].name;
		medicine[i].number = array_of_medicine.medicine[i].number;
		medicine[i].accessibility = array_of_medicine.medicine[i].accessibility;

	}
}