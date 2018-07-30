#include <iostream>
using namespace std;

class student
{
    private:
        int id;
        char nam[20];
    public:
        void input()
        {
            cout<<"Enter the name of student:\t"<<endl;
            cin>>nam;
            cout<<"Enter the student id: \t"<<endl;
            cin>>id;
        }
        void display()
        {
            cout<<"Name:"<<nam<<endl;
            cout<<"Student id:"<<id<<endl;
        }
};

int main()
{
    student obj;
    obj.input();
    obj.display();

    return 0;
}
