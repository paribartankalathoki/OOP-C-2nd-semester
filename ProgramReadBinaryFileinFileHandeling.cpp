#include <iostream>
#include <fstream>

using namespace std;

class student
{
    private:
        int roll;
        char  nam[20];
        char add[50];
    public:
        int input()
        {
            cout<<"\n Roll : "<<roll<<endl;
            cout<<"\n Name : "<<nam<<endl;
            cout<<"\n Address :"<<add<<endl;
        }
};

int main()
{
        student obj;
        ifstream fin;
        fin.open("BinaryFile.dat",ios::binary|ios::in);
        fin.read((char *)&obj,sizeof(student));
        while(fin)
        {
            obj.input();
            fin.read((char *)&obj,sizeof(student));
        }
        fin.close();

        return 0;
}
