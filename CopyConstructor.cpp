#include <iostream>
using namespace std;

class item
{
    int code, price;
public:
    item(int l, int b)
    {
        code=l;
        price=b;
    }
    int display()
    {
        cout<<endl<<"code : "<<code<<endl;
        cout<<endl<<"price : "<<price<<endl;
        return 0;
    }
    item(item &x)
    {
        //copy constructor
        code= x.code;
        price= x.price;
    }
};
int main()
{
    item i1(15,200);
    item i2(i1);
    i1.display();
    i2.display();
    return 0;
}
