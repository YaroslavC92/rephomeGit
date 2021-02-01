#include <iostream>
using namespace std;

enum cro_zer {zero, cross};

int main()
{
    volatile int var1 = 111;
    volatile char var2 = 'a';
    volatile float var3 = 10.33;
    cro_zer field[3][3] = {{zero, cross, zero},
                           {cross, zero, zero},
                           {zero, cross, cross}};


    return 0;
}
