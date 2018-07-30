#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,k,l;
    char nam[2][20], sub[2][20],day[2][20];
    //cout<<"Enter the first Teacher name : "<<endl;
    //cin>>nam[i];
    for(i=0;i<2;i++)
    {
        cout<<"Enter the Teacher name : "<<endl;
        cin.getline(nam[i],20);
    }
    //cout<<"Enter the first subject name : "<<endl;
    //cin>>sub[j];
    for(j=0;j<2;j++)
    {
        cout<<"Enter the subject name : "<<endl;
        cin.getline(sub[j],20);
    }
    //cout<<"Enter the first day of week : "<<endl;
    //cin>>day[k];
    for(k=0;k<2;k++)
    {
        cout<<"Enter the day of week : "<<endl;
        cin.getline(day[k],20);
    }
    cout<<endl;
    cout<<"Teacher Name"<<setw(24)<<"Subject"<<setw(25)<<"Day"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;
    for(k=0; k<2; k++)
    {
        l=strlen(nam[k]);
        l=strlen(sub[k]);
        cout<<nam[k]<<setw(32-l)<<sub[k]<<setw(35-l)<<day[k]<<endl;
    }

    return 0;

}
