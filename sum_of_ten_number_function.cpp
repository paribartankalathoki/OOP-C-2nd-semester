#include <iostream>
using namespace std;
int sum(int a[10])
{   int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum is : "<<sum<<endl;
}
int main()
{
    int i,a[10];
    cout<<"Enter any ten number : " <<endl;
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    sum(a);
    return 0;
}
