#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    struct student
    {
        int id;
        char add[20],nam[20];
    }s[10];
    for(int i=0; i<2; i++)
    {
        cout<<"Enter the name :\t";
        cin.getline(s[i].nam,20);
        cout<<"Enter the address :\t";
        cin.getline(s[i].add,20);
        cout<<"Enter the id :\t";
        cin>>s[i].id;
        cin.ignore(s[i].id,'\n');
    }
    for(int i=0; i<2;i++)
    {
        cout<<"Name:\t"<<s[i].nam<<endl;
        cout<<"ID No:\t"<<s[i].id<<endl;
        cout<<"Address:\t"<<s[i].add<<endl;
    }
    getch();
    return 0;
}
