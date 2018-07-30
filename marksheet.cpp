#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    int i,l;
    float m[5];
    char sub[5][20] = {"mathematics","Java","Statistics","sociology","opp"};
    float per,total = 0;
    cout<<"Enter the marks of the mathematics,Java,Statistics,sociology,opp" << endl;
    for(i=0;i<5;i++)
    {
        cin>>m[i];
    }
        cout<<"\t"<<"subject"<<setw(15)<<"Marks" << endl;
        cout<<"\t"<<"----------------------------" << endl;

    for(i=0;i<5;i++)
    {
        total = total + (float) m[i];
        l= strlen(sub[i]);
        cout<<"\t"<<sub[i]<<setw(22-l)<<m[i] << endl << endl;
        cout<<"\t"<<"----------------------------" << endl;
    }
    per = total/5;
    cout<<"\t"<<"Total"<<setw(17)<<setprecision(3)<<total << endl << endl;"\t";
    cout<<"\t"<<"Percentage"<<setw(12)<<setprecision(3)<<per << endl;

    getch();

    return 0;
}
