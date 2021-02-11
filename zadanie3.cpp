#include <iostream>

using namespace std;
bool checkBalance(int, int *);

int main()
{
int mass[] = {3,2,3,4,12};
int border = (sizeof(mass) / sizeof(int)) - 1;
bool rezult = checkBalance(border, mass);
cout << rezult;
    return 0;
}

bool checkBalance(int fborder, int *pmass){
for(int limit = 1; limit <= fborder; limit++){  //Цикл для перемещения условной границы
   int lg = 0;
   int rg = 0;
	for(int i = 0; i < limit; i++){             //Цикл для подсчета суммы слева от границы
	   lg += *(pmass + i);
	}
		for(int i = fborder; i >= limit; i--){  //Цикл для подсчета суммы справа от границы
		   rg += *(pmass + i);
        }
			if(lg == rg){
			  return 1;
            }

}


return 0;
}
