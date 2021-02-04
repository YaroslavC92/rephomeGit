#include <iostream>
using namespace std;
extern int a, b, c, d;

int main()
{
    cout << a*(b+(static_cast<float>(c)/d)) << endl;
    return 0;
}
