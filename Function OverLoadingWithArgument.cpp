#include <iostream>
using namespace std;
int product(int a, int b, int c)
{
    return a*b*c;
}
int product (int a, int b)
{
    return a*b;
}
int main()
{
    cout<<"The product of 12 and 5 is : " <<product(12,5);
    cout<<"The product of 2*3*4 is : " <<product(2,3,4);
    int x=3,y=5,z=2;
    cout<<"The product of x & y is : " <<product(x,y);
    cout<<"The product of x,y&z is : " <<product(x,y,z);

    return 0;

}
