#include <iostream>

using namespace std;
void invert(int *, int);
void massout(int*, int);

int main()
{
    int mass[] = {1,1,0,1,0,1,0,1};
    int razmer = (sizeof(mass) / sizeof(int));
    massout(mass, razmer);
    invert(mass, razmer);
    massout(mass, razmer);

    return 0;
}

void invert(int *pmass, int frazmer){
 for(int i = 0; i < frazmer; i++){
    *(pmass + i) = !(*(pmass + i));
 }

}
void massout(int *pmass, int raz){
for(int i = 0; i < raz; i++){
    cout << *(pmass + i) << "  " ;
}
    cout << endl << endl;
}

