#include <io.h>
#include <locale>

int readNumber();
void writeAnswer(int x);

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x, y;
    x = readNumber();
    y = readNumber();
    writeAnswer(x + y);
    return 0;
}