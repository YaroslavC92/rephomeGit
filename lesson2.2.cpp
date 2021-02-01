#include <iostream>
using namespace std;

enum cro_zer {zero, cross};
struct field{
cro_zer cell[3][3]; /* массив для записи значений в клетки игрового поля */
int use_cell[9] = {0}; /* массив для хранения информации о использованых и не использованых клатках поля */
};

int main()
{
    field one_game;
    one_game.cell[0][1] = cross;
    cout << one_game.cell[0][1];
    return 0;
}
