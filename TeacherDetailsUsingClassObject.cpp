#include <iostream>

using namespace std;

class teacher
{
    private:
        char nam[20],sub[20];
        int sal;
    public:
        void input()
        {
            cout<<"Teacher Name : ";
            cin.getline(nam,20);
            cout<<"Teacher's Subject : ";
            cin.getline(sub,20);
            cout<<"Salary : ";
            cin>>sal;
        }
        void display()
        {
            cout<<"Teacher's Name : "<<" "<<nam<<endl<<"Subject : "<<" "<<sub<<endl<<"Salary : "<<" "<<sal;
        }
};

int main()
{
    teacher obj;
    obj.input();
    obj.display();

    return 0;
}
