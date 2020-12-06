// main.cpp

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
		cout << "Addition is complete \n";
		break;
	case 2:
		cout << "Subtraction is complete\n";
		break;
	case 3:
		cout << "Multiplication is complete\n";
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

