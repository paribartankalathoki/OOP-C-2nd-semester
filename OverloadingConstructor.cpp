#include <iostream>
using namespace std;

class count
{
    private:
        int a,b;
    public:
        count()//default constructor
        {
            a=0,b=0;
        }
        count(int x,int y)//parameter constructor
        {
            a=x;
            b=y;
        }
        count(count &x)
        {   //copy constructor
            a=x.a;
            b=x.b;

        }
        void display()
            {
                cout<<endl<<"a : "<<a<<endl;
                cout<<endl<<"b : "<<b<<endl;
            }
};
int main()
{
    count i1;
    i1.display();
    count i2(10,40);
    i2.display();
    count i3(i2);
    i3.display();

    return 0;
}
