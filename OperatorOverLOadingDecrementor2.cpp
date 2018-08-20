#include <iostream>
using namespace std;

class Opr
{
        int a;
    public:

        int input()
        {
            cout<<"Enter the  value : ";
            cin>>a;
        }

        int show()
        {
            cout<<"\n\n A = "<<a<<endl;
        }
        void operator --(int)
        {
            a--;
        }

};

int main()
{
    Opr obj;
    obj.input();
    obj.show();
    obj--;
    obj.show();

    return 0;
}
