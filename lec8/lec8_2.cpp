#include <iostream>

template <typename A>

A add(A x, A y)
{
	return(x + y);
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}