#include <iostream>
#include <fstream>

using namespace std;

class student
{
    private:
        int roll;
        char  nam[20];
        char add[50];
    public:
        void input()
        {
            cout<<"\n Enter the name : ";
            cin>>nam;
            cout<<endl;
            cout<<"\n Enter the roll no : ";
            cin>>roll;
            cout<<endl;
            cout<<"\n Enter the Address : ";
            cin>>add;
        }
};

int main()
{
    char ch;
    student obj;
    ofstream fout;
    fout.open("BinaryFile.dat",ios::app);
        do
        {
            obj.input();
            fout.write((char *)&obj, sizeof(student));
            cout<<"Do you want to add more ? (y/n)... ";
            cin>>ch;
        }while(ch=='y'||ch=='y');
        fout.close();

        return 0;
}
