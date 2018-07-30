#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x=3, &y=x;
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    x=x+10;
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    y=y+15;
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    getch();
    return 0;
}
