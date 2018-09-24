#include <iostream>
#include <iomanip>
using namespace std;

class student_rec
{
  public:
    char nam[20], address[20], relgn[20];
    char cell_no[20];
    int input()
    {
        cout << "Enter student Name : ";
        cin.getline(nam,20);
        cout << "Enter Address : ";
        cin.getline(address,20);
        cout << "Cell number : ";
        cin.getline(cell_no,20);
        cout << "Enter Religion : ";
        cin.getline(relgn,20);
    }
    // int display()
    // {
    //     cout<<endl<<"Name"<<setw(20)<<"Address"<<setw(20)<<"Contact"<<setw(20)<<"Religion";
    //     cout<<endl<<nam<<setw(20)<<address<<setw(20)<<cell_no<<setw(20)<<relgn;
    //     //cout<<endl<<endl<<"Name"<<endl<<nam<<setw(20)<<"Address "<<endl<<address<<setw(20)<<"Contact "<<cell_no;
    // }
};
class record : public student_rec
{
  public:

    int display_Reg()
    {
        cout << endl<< "Name" << setw(20) << "Address" << setw(20) << "Contact" << setw(20) << "Religion";
        cout << endl<< nam <<setw(20)<< address <<setw(20)<< cell_no <<setw(20)<< relgn;
        //cout<<endl<<endl<<"Name"<<endl<<nam<<setw(20)<<"Address "<<endl<<address<<setw(20)<<"Contact "<<cell_no;
    }
};

int main()
{
    record obj[3];
    obj[i].input();
    obj[i].display_Reg();

    return 0;
}
