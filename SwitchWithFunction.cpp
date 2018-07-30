#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int pro(int a,int b)
{
    return a*b;
}
int rem(int a,int b)
{
    return a%b;
}
int quo(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b,ch;
    char choice;
    do{
    cout<<"Enter any two number"<<endl;
    cin>>a>>b;
    cout<<"1.Add \n2.subtract\n3.Multiply\n4.Reminder\n5.Divide\n"<<endl;
    cin>>ch;
    switch(ch)
        {
            case 1:
                cout<<"The sum of : "<< a << "+" << b << "=" << sum(a,b) << endl;
                break;
            case 2:
                cout<<"The different of : "<< a << "and" << b << "=" << sub(a,b) << endl;
                break;
            case 3:
                cout<<"The product of : "<< a << "+" << b << "=" << pro(a,b) << endl;
                break;
            case 4:
                cout<<"The reminder of : "<< a << "+" << b << "=" << rem(a,b) << endl;
                break;
            case 5:
                cout<<"The sum of : "<< a << "+" << b << "=" << quo(a,b) << endl;
                break;

        }
        cout<<"Continue (Y/N)";cin>>choice;
    }while(choice=='y'||choice=='Y');

    getch();
}
