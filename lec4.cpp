#include <iostream>

#define std	std::

int main()
{
	double first, second;
	char action;
	std cout << std endl << "Enter a double value: ";
	std cin >> first;
	std cout << "Enter a double value: ";
	std cin >> second;
	std cout << "Enter one of the following: +, -, *, /: ";
	std cin >> action;
	//if (action == '+')
	switch (action)
	{
		case '+': std cout << first << " + " << second << " is " << first + second;
			break;
		case '-': std cout << first << " - " << second << " is " << first - second;
			break;
		case '*': std cout << first << " * " << second << " is " << first * second;
			break;
		case '/': std cout << first << " / " << second << " is " << first / second;
	}
	return 0;
}