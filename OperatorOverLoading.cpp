#include <iostream>
using namespace std;
class test
{
    int a,b;
public:
    test()
    {
        a=6;
        b=4;
    }
    void display()
    {
        cout<<"\n a = "<<a<<"\n b = "<<b<<endl;
    }
    void operator ++()
    {
        ++a;
        ++b;
    }
};
int main()
{
    test obj;
    obj.display();
    ++obj;
    obj.display();

    return 0;
}
