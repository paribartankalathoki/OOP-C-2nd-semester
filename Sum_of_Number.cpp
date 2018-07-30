#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,sum=0,num;
    cout<<"How many do you want to sum?"<<endl;
    cin>>n;
    cout<<"Enter any " <<n<< "number"<<endl;
    for(int i=1; i<=n; i++)
    {   cin>>num;
        sum=sum+num;
    }
    cout<<"The sum is " <<sum<<endl;
    getch();
    return 0;
}
