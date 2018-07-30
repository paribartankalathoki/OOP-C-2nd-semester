#include<iostream>

using namespace std;

int square(int num, int &sq)
{
    sq=num*num;
}
int main()
{   int num,sq;
    cout<<"Enter the number:\t";
    cin>>num;square(num,sq);
    cout<<"The square is : "<<sq;
    return 0;
}
