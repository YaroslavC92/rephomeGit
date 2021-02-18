#include <iostream>
#define CAMP(x, y) ((x >= 0) && (x < y))

int main()
{

    if(CAMP(5, 8)) std::cout << "YES";
      else std::cout << "NO";

    return 0;
}
