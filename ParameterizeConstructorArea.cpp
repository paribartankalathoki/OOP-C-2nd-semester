#include <iostream>

using namespace std;
class rectangle
{
    private:
        int l,b,x;
    public:
        rectangle(int x,int y)
        {
            l=x;
            b=y;
        }
        int display()
        {
            cout<<"\n Length : "<<l<<endl<<endl<<" Breadth : "<<b<<endl<<endl;
        }
        int input()
        {
                cout<<"\n Enter Length and Breadth : ";
                cin>>l>>b;
        }

        int area()
        {   x=l*b+b;
            return x;
        }
        int show()
        {
            cout <<" Area = " << x << endl<<endl;
        }
};

int main()
{
    rectangle obj(20,10);
    obj.display();
    obj.area();
    obj.show();
    rectangle obj1(12,0);  // initializing the data members of object explicitly
    obj1.area();
    obj1.display();
    obj1.show();
    obj.input();
    obj.display();
    obj.area();
    obj.show();


    return 1;
}
