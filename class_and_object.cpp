#include <iostream>
using namespace std;
class rectangle
{
    private:
        int l,b;
    public:
        void setdata();
        void showdata();
        int perimeter();
        int area();
};

void rectangle:: showdata()
{
    cout<<"Length = "<<l<<"\nBreadth = "<<b<<endl;
}
void rectangle::setdata()
{
    cout<<"input values of l & b"<<"\n";
    cin>>l>>b;
}
int rectangle::area()
{
    return l*b;
}
int rectangle::perimeter()
{
    return 2*(l+b);
}
int main()
{   char ch;

    do
    {
        rectangle r;
        r.setdata();
        r.showdata();
        cout<<"Area = "<<r.area()<<endl;
        cout<<"Perimeter = "<<r.perimeter()<<endl;
        cout<<endl;
        cout<<"Do you want to continue ? [y / n]\t";
        cin>>ch;
        cout<<endl;
    }while(ch=='y' || ch=='Y');

    return 0;
}
