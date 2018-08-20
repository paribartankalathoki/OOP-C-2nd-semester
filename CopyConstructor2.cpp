#include <iostream>
using namespace std;

class rectangle
{
        int x,y;

    public:

    rectangle(int a, int b)
    {
        x=a;
        y=b;
    }
    int display()
    {
        cout<<"\n Length = "<<x<<endl;
        cout<<"\n Breath = "<<y<<endl;
    }
    rectangle(rectangle &p)
    {
        x=p.x;
        y=p.y;
    }
};
int main()
{
    rectangle obj(56,39);
    rectangle obj1(obj);
    obj.display();
    obj1.display();
    return 0;
}
