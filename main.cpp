// main.cpp
#include "stdafx.h"
#include "funcs.h"
#include <iostream>
using namespace std;

int main()
{
	double number1;
	double number2;
	int operation;
	
	cout << "Enter the first number, please\n";
	cin >> number1;
	cout << "Enter the operation, please\n 1. +\n 2. -\n 3. *\n 4. /\n";
	cin >> operation;
	cout << "Enter the second number, please\n";
	cin >> number1;
	
	switch (operation)
	{
	case 1:
		cout << Add(number1, number2) << endl;
		break;
	case 2:
		cout << "Subtraction is complete\n";
		break;
	case 3:
		cout << Mul(number1, number2) << endl;
		break;
	case 4:
		cout << "Division is complete\n";
		break;
	default:
		cout << "Error\n";
		break;
	}

	system("pause");
	return 0;

}

