#include <iostream>
#include <iomanip>
using namespace std;

class student_rec
{
    public:
        char nam[20],address[20],relgn[20];
        int cell_no;
        int input()
        {
            cout<<"Enter student Name : ";
            cin>>nam;
            cout<<"Enter Address : ";
            cin>>address;
            cout<<"Cell number : ";
            cin>>cell_no;
            cout<<"Enter Religion : ";
            cin>>relgn;
        }
        // int display()
        // {
        //     cout<<endl<<"Name"<<setw(20)<<"Address"<<setw(20)<<"Contact"<<setw(20)<<"Religion";
        //     cout<<endl<<nam<<setw(20)<<address<<setw(20)<<cell_no<<setw(20)<<relgn;
        //     //cout<<endl<<endl<<"Name"<<endl<<nam<<setw(20)<<"Address "<<endl<<address<<setw(20)<<"Contact "<<cell_no;
        // }
};
class record: public student_rec
{
    public:
        // int input_Reg()
        // {
        //     input();
        //     cout<<"Enter Religion : ";
        //     cin>>relgn;
        // }

        int display_Reg()
        {
            cout<<endl<<"Name"<<setw(20)<<"Address"<<setw(20)<<"Contact"<<setw(20)<<"Religion";
            cout<<endl<<nam<<setw(20)<<address<<setw(20)<<cell_no<<setw(20)<<relgn;
            //cout<<endl<<endl<<"Name"<<endl<<nam<<setw(20)<<"Address "<<endl<<address<<setw(20)<<"Contact "<<cell_no;
        }
        // int display_Reg()
        // {
        //     display();
        //      {
        //          cout<<setw(20)<<"Religion"<<endl;
        //          cout<<setw(60)<<relgn;
        //      }
        // }
};
int main()
{
    record obj;
    obj.input();
    obj.display_Reg();

    return 0;
}
