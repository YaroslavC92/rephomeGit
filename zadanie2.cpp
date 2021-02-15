#include <iostream>
#include <fstream>
using namespace std;

void glue(ifstream * ,ifstream * );
int main()
{

    ifstream B_1;
    ifstream B_2;
    B_1.open("D:\\C_C++\\lesson6.2\\text_1.txt", ios::in);
    B_2.open("D:\\C_C++\\lesson6.2\\text_2.txt", ios::in);
    glue(&B_1, &B_2);

    return 0;
}

void glue(ifstream *B_11, ifstream *B_22){
    char *tbox_1 = new char[200];
    char *tbox_2 = new char[200];
    ofstream B_3;
    B_3.open("D:\\C_C++\\lesson6.2\\text_3.txt", ios::app);
    while(B_11->eof()==0){
        *B_11 >> tbox_1;
        B_3 << ' ';
        B_3 << tbox_1;
    }
    B_3 << endl;
    while(B_22->eof()==0){
        *B_22 >> tbox_2;
        B_3 << ' ';
        B_3 << tbox_2;
    }
        B_11->close();
        B_22->close();
        B_3.close();
        delete[] tbox_1;
        delete[] tbox_2;
}


