#include <iostream>
#include <conio.h>
using namespace std;
class example
{
    int a,b;
    public:
        void input()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }
        void operator ++()   //operator function as a member function
        {
            ++a;
            ++b;
        }
        void display()
        {
            cout<<"a="<<a<<endl<<"b="<<b<<endl;
        }
};

int main()
{
    example e;
    e.input();
    cout<<"Before overloading unary minus operator"<<endl;
    e.display();
    ++e;
    cout<<"After overloading unary minus operator"<<endl;
    e.display();
    getch();
    return 0;
}
