#include <iostream>
#include <iomanip>
#include<string.h>
using namespace std;

class record
{
    public:
        char nam[20], address[20], program[20];
        int cell_no;
        void input();
        void display();
};
void record::input()
{
        cout << "Enter student Name : ";
        cin.sync();
        cin.getline(nam,20);
        cout << "Enter Address : ";
        cin.getline(address,20);
        cout << "Cell number : ";
        cin>>cell_no;
        cout << "Enter program : ";
        cin.sync();
        cin.getline(program,20);
        cin.sync();
}
void record::display()
{   int l;
    l=strlen(nam);
        cout << endl<< nam <<setw(20-l)<<" "<<address <<setw(20-l)<<" "<<program <<setw(20-l)<<" "<<cell_no <<" ";
}
int main()
{   record obj[100];
    int n;
    cout<<"How many student do you want?";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        obj[i].input();
    }
    cout << endl<< "Name" << setw(16)<<" "<< "Address" << setw(20) << "Program" << setw(13) << "Contact";
    for(int j=0; j<n; j++)
    {
        obj[j].display();
    }

    return 0;
}
