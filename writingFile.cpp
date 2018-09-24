#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream obj;
    obj.open("test.txt");
    obj<<" Hello EveryBody !"<<endl;
    obj<<" Hello EveryBody !"<<endl;
    obj<<" Hello EveryBody !"<<endl;
    obj.close();

    cout<<"Done !"<<endl;

    return 0;
}
