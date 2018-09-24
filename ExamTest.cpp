/*
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int i,l,m[5];
    char sub[5][20]={"abd","sadf","s","ssdfg","sf"};
    float per,total=0.0;`

    cout<<"Enter the subject marks : ";
    for(i=0;i<5;i++)
    {
        cin>>m[i];
    }

    cout<<"subject"<<setw(15)<<"Marks"<<endl<<endl;
    for(i=0;i<5;i++)
    {
        total=total+m[i];
        l=strlen(sub[i]);
        cout<<sub[i]<<setw(22-l)<<m[i]<<endl;
    }
    per=total/5;
    cout<<"Total : "<<setw(15)<<total;
    cout<<endl<<"Percentages : "<<setw(15)<<per;

    return 0;
}

*/



#include<iostream>
using namespace std;

/*
namespace first
{
    int a=100;
}
int a=400;
int main()
{
    int a=500;
    cout<<"a = "<<a<<endl<<endl;
    cout<<"A = "<<first::a<<endl<<endl;
    cout<<"a = "<<::a<<endl;
    return 0;
}

*/

/*
int square(int n, int *s)
{
    *s=n*n;
}
int main()
{
    int n=10,s;
    square(n,&s);
    cout<<" Square : "<<s;
    return 0;
}

*/


/*
int Add(int x, int y, int z=10)
	{

		return x + y + z;

	}


	int main()
	{

		int rs;

		rs = Add(5,8);
		cout<<"\n\tThe sum is : "<<rs;

		rs = Add(4,8,2);
		cout<<"\n\tThe sum is : "<<rs;

		rs = Add(7,3,4);
		cout<<"\n\tThe sum is : "<<rs;

	}

	*/




	/*

	int m(int a[2][3], int b[2][3])
	{
	    for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]+b[i][j];
            }
            cout<<endl;
        }
	}
int main()
{   int a[2][3],b[2][3];
	    cout<<" Enter 1st matrix :";
	    for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<endl<<" Enter 2nd matrix :";
	    for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>b[i][j];
            }
        }

        m(a,b);

	return 0;
}


*/

class Inherit
{
private:
    int age;
    char nam[20];
public:
    void input()
    {
        cout<<"Enter the name :";
        cin>>nam;
        cout<<"\nEnter the age :";
        cin>>age;
    }
    void display()
    {
        cout<<"\n\n Name : "<<nam<<endl;
        cout<<"\n Age : "<<age<<endl;
    }
};
class teacher:public Inherit
{
    char add[20];
public:
    void input_add()
    {
        input();
        cout<<"\nEnter Address :";
        cin>>add;
    }
    void display_sub()
    {
        display();
        cout<<"\n Address : "<<add<<endl;
    }
};

int main()
{
    teacher obj;
    obj.input_add();
    obj.display_sub();

    return 0;
}
