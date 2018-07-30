#include <iostream>
using namespace std;

class marks
{
    private:
        int math, science;
    public:
        marks()//constructor call
        {
            math=59;
            science=68;
            cout<<"Inside the constructor"<<endl;
            cout<<"C++ object created"<<endl;
        }
        ~marks()//Destructor call
        {
            cout<<"Inside the Destructor"<<endl;
            cout<<"C++ object Destructed "<<endl;
        }
};

int main()
{
    {
        marks m1;
        //marks m2;
    }
    return 0;
}
