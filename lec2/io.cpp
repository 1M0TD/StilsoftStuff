#include "io.h"
#include <iostream>

///////////////////////////////////////////////////////////////

void writeAnswer(int x)
{
    std::cout << "��������� = " << x << '\n';
}

///////////////////////////////////////////////////////////////

int readNumber()
{
    std::cout << "������� �����: ";
    int x;
    std::cin >> x;
    return x;
}