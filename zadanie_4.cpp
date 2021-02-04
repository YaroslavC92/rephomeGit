#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int *pmass;
    int mass[3][3][3];
    for(int x = 0; x < 3; x++){         /* Присвоим массиву значения */
        for(int y = 0; y < 3; y++){
            for(int z = 0; z < 3; z++){
               mass[x][y][z] = count;
               count++;
            }
        }
    }

    pmass = &mass[1][1][1];
    cout << *pmass << endl;
    pmass = **mass;
    cout << *(pmass + (1*9 + 1*3 + 1));

    return 0;
}
