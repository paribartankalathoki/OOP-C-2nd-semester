#include <iostream>

using namespace std;

class rectangle
{
        int l,b,x;
    public:
        rectangle()
        {
            l=0;
            b=0;
        }
        int input()
        {
            cout<<"\n Enter the  l and b : ";
            cin>>l>>b;
        }
        int display()
        {
            cout<<"\n\n Length = "<<l<<endl;
            cout<<"\n\n Breadth = "<<b<<endl;
            cout<<"\n\n Area = "<<x<<endl;
        }
        int area()
        {   x=l*b;
            return x;
        }
};
int main()
{
    rectangle obj;
    obj.input();
    obj.area();
    obj.display();
    return 0;
}
