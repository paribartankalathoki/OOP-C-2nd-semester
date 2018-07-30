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
};
int main()
{
    item i1(15,200);
    item i2(12,400);
    i1.display();
    i2.display();
    return 0;
}
