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
    cin>>nam;
    cout<<"Enter the student id :- "<<endl;
    cin>>id;
}
void student::showdata()
{
    cout<<endl<<nam<<endl<<id<<endl;
}
int main()
{
    student s;
    s.input();
    s.showdata();

    return 0;

}
