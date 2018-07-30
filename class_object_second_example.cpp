#include <iostream>
using namespace std;

class student
{
    private:
        char nam[20];
        int id;
    public:
        void input();
        void showdata();
};
void student::input()
{
    cout<<"Enter the name of student :- "<<endl;
    cin.sync();
    cin.getline(nam,20);
    cout<<"Enter the student id :- "<<endl;
    cin>>id;
    cin.sync();
}
void student::showdata()
{
    cout<<endl<<nam<<endl<<id<<endl;
}
int main()
{   student s[100];
    int n;
    cout<<"How many student do you want?";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        s[i].input();
    }
    for(int j=0; j<n; j++)
    {
        s[j].showdata();
    }

    return 0;

}
