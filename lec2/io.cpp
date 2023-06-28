#include "io.h"
#include <iostream>

///////////////////////////////////////////////////////////////

void writeAnswer(int x)
{
    std::cout << "–езультат = " << x << '\n';
}

///////////////////////////////////////////////////////////////

int readNumber()
{
    std::cout << "¬ведите число: ";
    int x;
    std::cin >> x;
    return x;
}