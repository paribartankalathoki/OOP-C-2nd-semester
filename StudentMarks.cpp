#include <iostream>

using namespace  std;

int main()
{
    int m[5],sum=0,p;
    cout<<"Enter subject marks : ";
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
        sum += m[i];
    }
    cout<<"Total : "<<sum<<endl;
    p=sum/5;
    cout<<"Percentage : "<<p<<endl;
    if(p>=90 && p<=100)
        cout<<"Grade A";
    else if(p>=80)
        cout<<"Grade B";
    else if(p>=70)
        cout<<"Grade C";
    else if(p>=60)
        cout<<"Grade D";
    else
        cout<<"Grade E";

    return 0;
}
