#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}
float sum(float c, float d)
{
    return c+d;
}
int main()
{
    int a=9,b=15;
    float c=2.5,d=5.3;
    cout<<"The sum is of integer is : " <<sum(a,b)<<endl;
    cout<<"The sum of floating integer is : " <<sum(c,d)<<endl;

    return 0;
}
