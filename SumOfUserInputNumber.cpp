#include <iostream>

using namespace std;

int total(int a[])
{
    int total=0;
    for(int i=0;i<10;i++)
    {
        total+=a[i];
    }
    return total;
}
{
    int a[10];
    cout<<"Enter 10 number : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Total : "<<total(a);

    return 0;
}
