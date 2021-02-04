#include <iostream>

using namespace std;

int main()
{
    const int a = 9;
    const int b = 4;
    const int c = 20;
    const int d = 25;
    float result = 0;
    cout << a*(b+(static_cast<float>(c)/d)) << endl;
    result = (9*(4+(20.0/25.0)));
    cout << result;
    return 0;
}
