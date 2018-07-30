#include <iostream>
using namespace std;
int sum(int a[2][3],int b[2][3])
{   int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0;j<3; j++)
        {
            cout<<"\t"<<a[i][j]+b[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int  a[2][3], b[2][3],i,j;
    cout<<"Enter the element of first matrix : "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0;j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the element of second matrix : "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0;j<3; j++)
        {
            cin>>b[i][j];
        }
    }
    sum(a,b);

    return 0;
}
