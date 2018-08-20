#include <iostream>
using namespace std;

namespace first
{
        int a=100;
};

int main()
{   int a=3002346;
    cout<<"value 1: "<<a<<endl;
    cout<<"value 2: "<<first::a<<endl;
    return 0;
}
