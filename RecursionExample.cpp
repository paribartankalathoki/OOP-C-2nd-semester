#include <iostream>
#include <conio.h>
using namespace std;
int sum(int num)
{
    if(num ==1)
        return 1;
    else
        return num + sum(num-1);
}
int main()
{
    int num=10;
    cout<<"The sum is "<<sum(num);
    getch();
    return 0;
}
