#include<iostream>

using namespace std;

int square(int num)
{
    return num*num;
}
int main()
{   int num;
    cout<<"Enter the number:\t";
    cin>>num;
    cout<<"The square is : "<<square(num);
    return 0;
}
