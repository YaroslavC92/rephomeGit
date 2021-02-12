#include <iostream>
using namespace std;

void shift_L(int, int *);
void massout(int, int *);
void shift_R(int, int *);
void steepLR(int, int, int *);
int main(){
int mass[] = {1,2,3,4,5};
int sizem = sizeof(mass) / sizeof(int);
massout(sizem, mass);
steepLR(2, sizem, mass);
massout(sizem, mass);
steepLR(-2, sizem, mass);
massout(sizem, mass);
return 0;
}

void steepLR(int temp, int fsizem, int* pmass){
    if(temp < 0){
        temp *= -1;
        while(temp--)
        shift_L(fsizem, pmass);
    }
    else{
        while(temp--)
        shift_R(fsizem, pmass);
    }
}

void shift_L(int fsizem, int *pmass){
int temp = *pmass;
   for(int i = 1; i < fsizem; i++){
      *(pmass + (i - 1)) = *(pmass + i);
}

*(pmass + (fsizem - 1)) = temp;

}

void shift_R(int fsizem, int *pmass){
int temp = *(pmass + (fsizem - 1));
   for(int i = fsizem; i > 1; i--){
      *(pmass + (i - 1)) = *(pmass + (i - 2));
}

 *pmass = temp;

}

void massout(int fsizem, int *pmass){
for(int i = 0; i < fsizem; i++){
cout << *(pmass + i) << "  ";
}
cout << endl;
}
