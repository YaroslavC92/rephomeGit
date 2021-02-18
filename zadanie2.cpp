#include <iostream>
#define path(x, y, z)   *(*((x) + (y)) + (z))
using namespace std;

int main()
{
    int temp = 0;
    int **mass = new int *[3];
    for(int i = 0; i < 3; i++){
        mass[i] = new int[3];
    }
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mass[i][j] = temp;
      temp++;
    }
    }
    cout << path(mass, 2, 1);

    return 0;
}
