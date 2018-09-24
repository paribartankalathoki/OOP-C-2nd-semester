#include <iostream>

using namespace std;

class A
{
        int a,b;
    public:
        A(int x, int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<" A = "<<a<<endl<<" B = "<<b<<endl;
        }
        A(A &z)
        {
            a=z.a;
            b=z.b;
        }
};

int main()
{
    A obj1(10,30);
    A obj2(20,40);
    obj1.display();
    obj2.display();
    A obj3(obj1);
    obj3.display();
    A obj4(obj2);
    obj4.display();

    return 0;
}
