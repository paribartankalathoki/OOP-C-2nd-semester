#include <iostream>
using namespace std;

class item
{
    int code, price;
public:
    item()
    {
        code=0;
        price=0;
    }
    void display()
    {
        cout<<endl<<"code : "<<code<<endl;
        cout<<endl<<"price : "<<price<<endl;
    }
};
int main()
{
    item i1,i2;
    i1.display();
    i2.display();
    return 0;
}
