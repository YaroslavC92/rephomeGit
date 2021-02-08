#include <iostream>

using namespace std;

int main()
{
    int year = 1950;
    int new_year;
    while(cin >> new_year){
        new_year -= year;
        if(!(new_year % 400)){
            cout << "visokos" << endl;
        }
        else if(!(new_year % 100)){
            cout << "ne visokos" << endl;
        }
        else if(!(new_year % 4)){
            cout << "visokos" << endl;
        }
        else{
            cout << "ne visokos" << endl;
        }
    }
    return 0;
}
