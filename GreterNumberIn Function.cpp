#include <iostream>

using namespace std;
int gre(int a[])
{
    int i,g=a[0];
    for(int i=0;i<10; i++)
    {
        if(a[i]>g)
            g=a[i];
    }
    return g;
}

int main()
{
    int i,a[10];
    cout<<"Enter any 10 number that you want to  find greater number among them? \t";
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"The greatest number among that you entered is : "<<gre(a);

    return 0;
}
