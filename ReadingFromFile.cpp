#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char  a[20];
    ifstream obj;
    obj.open("File.txt");
    while(!obj.eof())
    {
        obj.getline(a,19);
        cout<<"\n "<<a;
    }
    obj.close();

    return 0;
}
