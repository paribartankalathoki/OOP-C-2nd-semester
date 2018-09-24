#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    fstream obj;
    char str[20];
    obj.open("test.txt");
    while(!obj.eof())
    {
        obj.getline(str,20);
        cout<<str;
        cout<<endl;
    }
    obj.close();

    return 0;
}
