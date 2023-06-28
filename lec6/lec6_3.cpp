#include <iostream>

int passOrFail(int x)
{
	int visitcounter{ x };
	if (visitcounter <= 3)
	{
		return(true);
	}
	if (visitcounter > 3)
	{
		return(false);
	}
	visitcounter++;

}

int main()
{
	std::cout << "User #1: " << (passOrFail(1) ? "Pass" : "Fail") << '\n';
	std::cout << "User #2: " << (passOrFail(2) ? "Pass" : "Fail") << '\n';
	std::cout << "User #3: " << (passOrFail(3) ? "Pass" : "Fail") << '\n';
	std::cout << "User #4: " << (passOrFail(4) ? "Pass" : "Fail") << '\n';
	std::cout << "User #5: " << (passOrFail(5) ? "Pass" : "Fail") << '\n';

	return 0;
}