#include <iostream>
#include <conio.h>
#include "external.cpp"
using namespace std;
extern int test;
int main()
{
    cout<<test<<endl;
    multiply(10);
    cout<<test<<endl;
    getch();
    return 0;
}
