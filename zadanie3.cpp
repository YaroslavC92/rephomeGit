#include <iostream>
#define smass(x, y)   sizeof(x) / sizeof(y);
using namespace std;

int main()
{

    int mass[] = {1,2,3,4,5,6,7,8,9,10};
    cout << smass(mass, int);

    return 0;
}
