#include <iostream>
using namespace std;
int sum(int a, int b, int c=10)
{
    return  a+b+c;
}
int main()
{
    cout<<"The Sum is"<<sum(10,30,2)<<endl;
    cout<<"The Sum is"<<sum(10,30)<<endl;
    return 0;
}
