#include <iostream>
using namespace std;

enum cro_zer {zero, cross};
struct field{
cro_zer cell[3][3]; /* ������ ��� ������ �������� � ������ �������� ���� */
int use_cell[9] = {0}; /* ������ ��� �������� ���������� � ������������� � �� ������������� ������� ���� */
};

int main()
{
    field one_game;
    one_game.cell[0][1] = cross;
    cout << one_game.cell[0][1];
    return 0;
}
