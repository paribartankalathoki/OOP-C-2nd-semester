#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream obj;
    obj.open("File.txt");
    obj<<"\n Welcome "<<endl;
    obj<<"\n It's Paribartan"<<endl<<endl;
    cout<<"\n\n TATA"<<endl;
    obj.close();

    return 0;
}
