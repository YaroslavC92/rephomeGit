#include <iostream>
using namespace std;

enum cro_zer {zero, cross};

struct field{
  cro_zer cell_1 : 1;
  cro_zer cell_2 : 1;
  cro_zer cell_3 : 1;
  cro_zer cell_4 : 1;
  cro_zer cell_5 : 1;
  cro_zer cell_6 : 1;
  cro_zer cell_7 : 1;
  cro_zer cell_8 : 1;
  cro_zer cell_9 : 1;
};

union var_cell{
field f;
cro_zer c;

};

int main()
{
    var_cell one_game;
    one_game.c = cross;
    cout << sizeof(one_game) << endl;
    one_game.f.cell_3 = cross;
    cout << one_game.f.cell_3;
    return 0;
}
