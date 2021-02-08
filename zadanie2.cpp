#include <iostream>

using namespace std;

int main()
{
int var;
    while(cin >> var){
            if(var < 2) continue;
        for(int i = 2; i <= var; i++){
            if(!(var % i)&&(i < var)){
                cout << "ne prostoe" << endl;;
                break;
            }
            else if(!(var % i)&&(i == var)){
                cout << "prostoe" << endl;
                break;
            }
        }
    }
    return 0;
}
