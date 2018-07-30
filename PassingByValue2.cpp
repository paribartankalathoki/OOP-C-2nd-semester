#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter any two number : \t";
    cin>>a>>b;
    cout<<"The sum is : \t"<<sum(a,b);
    return 0;
}
