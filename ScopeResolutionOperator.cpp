#include <iostream>
#include <conio.h>
using namespace std;
int a=0;
int main()
{
    int a=5;
    cout<<"Global a= "<<::a<<endl;
    ::a=10;
    cout<<"Local a= "<<a<<endl;
    cout<<"Global a= "<<::a<<endl;

    getch();
    return 0;
}
