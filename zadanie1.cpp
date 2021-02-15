#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file_1;
    ofstream file_2;

    file_1.open("D:\\C_C++\\lesson6.1\\text_1.txt");
    file_2.open("D:\\C_C++\\lesson6.1\\text_2.txt");
    file_1 << "What makes every American a typical one is a desire to get a well-paid job that will cover their credit card";
    file_2 << "At their best credit cards allow their owners to reserve hotel rooms, rent cars and finance larger purchases over several months";
    file_1.close();
    file_2.close();
    return 0;
}
