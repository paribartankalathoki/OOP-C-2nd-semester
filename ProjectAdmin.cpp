#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class Admn {
	private:
		char usernam[30],passwd[20],dept[15],boknam[20];
	public:
		char bokid[20],isuedte[20];

		void getdata()
		{
			cout<<"\n\n Enter the UserName : ";
			cin.ignore();
			cin.getline(usernam,30);
			cout<<endl;
			cout<<" Enter Your Department : ";
			cin.getline(dept, 20);
			cout<<endl;
			cout<<" Enter Book Name :";
			cin.getline(boknam, 20);
			cout<<endl;
			cout<<" Enter Book No :";
			cin.getline(bokid, 20);
			cout<<endl;
			cout<<" Enter Register Date :";
			cin.getline(isuedte, 20);
		}

		void displaydata()
		{
			cout<<"\n\n UserName :"<<usernam<<endl;
			cout<<"\n Department :"<<dept<<endl;
			cout<<"\n BookName :"<<boknam<<endl;
			cout<<"\n BookId :"<<bokid<<endl;
			cout<<"\n Issue Date :"<<isuedte<<endl;
		}

};

int main()
{
	Admn obj;
    cout<<"\n\n\n\n\n\n\n\n\n"<<setw(130)<<" Welcome to My Project !\n\n"<<setw(136)<<" Hello, It's me Paribartan Kalathoki.\n\n";
    for(int i=0;i<19;i++)
    {
        cout<<endl;
    }
    system("pause");
    system("cls");
    cout<<"\n Login Before Enter "<<endl;
	string nam = " ";
	char pass=' ';
	string passwd;
	cout<<"\n UserName : ";
	cin>>nam;
	cout<<endl;
	cout<<" Password : ";
	while(pass!=13)
	{
		pass=getch();
		if(pass!=13)
		{
			passwd+=pass;
			cout<<"*";
		}
	}
	if((passwd=="admin")&&(nam=="Admin"))
	{   system("cls");
        cout<<"\n Successfully Login !"<<endl;
	    obj.getdata();
        obj.displaydata();
        cout<<"\n\n Thank you for Visit"<<endl<<endl<<endl;
        system("pause");
	}
	else
    {
        cout<<"\n\n\n\n Invalid UserName or Password "<<endl;
        cout<<"\n Login Again";
        for(int i=0;i<25;i++)
        {
            cout<<endl;
        }
        system("pause");
        system("cls");
        main();
    }

    getch();
	return 0;
}
