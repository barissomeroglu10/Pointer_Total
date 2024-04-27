/*
In this code, we will get a number from user and will calculate sum from 1 to the number.

Developer = Barış Someroğlu
Date = 27.04.2024 - 04:00 pm
*/

#include <iostream>

using namespace std;

// Function prototype
int PointerTotal(int*);

int main()
{
	int Number;

	cout << "Please enter a number = ";
	cin >> Number;

	int* ptrNumber = &Number; // Pointer declaration

	cout << "\nTotal = " << PointerTotal(&Number) << endl; // Call function

	return 0;
}

// Function definition
int PointerTotal(int* ptrNumber)
{
	int Total = 0;

	for (int i = 1; i <= *ptrNumber; i++)
	{
		Total += i;
	}

	return Total;
}
