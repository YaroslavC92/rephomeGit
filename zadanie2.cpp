#include <iostream>

using namespace std;

void massin(int *);
void massout(int *);

int main()
{
    int mass[8] = {0};
    massout(mass);
    massin(mass);
    massout(mass);

    return 0;
}
void massin(int *pmass){
    int temp = 1;
for(int i = 0; i < 8; i++){
    *(pmass + i) = temp;
    temp += 3;
}
}
void massout(int *pmass){
for(int i = 0; i < 8; i++){
    cout << *(pmass + i) << "  ";
}
  cout << endl << endl;
}
