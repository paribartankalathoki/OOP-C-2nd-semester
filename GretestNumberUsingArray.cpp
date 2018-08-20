#include<iostream>

using namespace std;

int main()
{
    int a[10],g;
    cout<<"Enter any ten number : ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    g=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>g)
            g=a[i];
    }

    cout<<"The greatest number is : "<<g;
    return 0;
}
