#include <iostream>
using namespace std;

class time
{
    int hr,minute;
public:
    void getdata()
    {
        cout<<"Enter hour and minute : "<<endl;
        cin>>hr>>minute;
    }
    int operator < (time t)
    {
        int ft,st;
        ft = hr*60+minute;
        st = t.hr*60+t.minute;

        if(ft<st)
        {
            return 1;
        }
        else
            return 0;
    }
};
 int main()
 {
     time t1,t2;
     t1.getdata();
     t2.getdata();
     if(t1<t2)
     {
         cout<<"\nt1 is less than t2 "<<endl;
     }
     else
        cout<<"\nt1 is greater or equal than t2 "<<endl;
 }
