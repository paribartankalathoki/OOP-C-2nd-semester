#include <iostream>
#include <string.h>
#include<stdlib.h>

using namespace std;

class record
{
    private:
        char nam[20],g[],addr;
        long int dob,id,cell_no;
    public:
        void input();
        void display();
};
record r;
void record::input()
{
    cout<<"Enter student's name : ";
    cin>>r.nam;
    cout<<endl<<"Enter student's registration number : ";
    cin>>r.id;
    cout<<endl<<"Enter student's cell phone number: ";
    cin>>r.cell_no;
    cout<<endl<<"Enter student's Date of Birth: ";
    cin>>r.dob;
    cout<<endl<<"Gender: ";
    cin>>r.g;
    cout<<endl<<"Enter the address : ";
    cin>>r.addr;
}
void record::display()
{
    cout<<"---------------------------Student record Table---------------------------------"<<endl;
    cout<<"Reg.ID   "<<"Name   "<<"Cell No.     "<<"Address     "<<"Gender "<<"DOB\n\n";
    cout<<r.id <<"\t"<<r.nam <<"\t"<<r.cell_no <<"\t"<<r.addr <<"\t"<<r.g <<"\t"<< r.dob;
}

int main()
{
    record obj[50];

    int choice,n,i;

        cout<<"How many do you want? " ;
        cin>>n;

        cout<<endl<<"1. Add Student Record"<<endl;
        cout<<endl<<"2. Show Student Record"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(n)
        {
            case 1:
                obj[i].input();
                break;

            case 2:
                obj[i].display();
                break;

             default:
                cout<<"Invalid Input"<<endl;
        }
        system("pause");
        main();

    return 0;
}
