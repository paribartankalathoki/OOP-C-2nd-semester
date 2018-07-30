#include <iostream>
using namespace std;

int dis(int a[2][3])
{  cout<<"The matrix is : "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"\t"<<a[i][j];

        }
        cout<<endl;
    }
}
int main()
{   int i,j,a[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter the element of the matrix : " <<endl;
            cin>>a[i][j];
        }
    }
    dis(a);
    return 0;
}
