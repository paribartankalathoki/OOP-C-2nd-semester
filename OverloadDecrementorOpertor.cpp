#include <iostream>

using namespace std;

class ope
{
    private:
        int a;
    public:
    ope()
    {
        a=0;
    }
    int input()
    {
        cout<<"Enter the number : ";
        cin>>a;
    }
    int display()
    {
        cout<<"\nA = "<<a;
    }
    void operator --()
    {
        --a;
    }
};

int main()
{
    ope obj;
    obj.input();
    obj.display();
    --obj;
    obj.display();

    return 0;
}
