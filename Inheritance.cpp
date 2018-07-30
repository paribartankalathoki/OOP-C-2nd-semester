#include <iostream>

using namespace std;

class Inheritance
{
	private:
		char name[20];
		int age;
	public:
		int input()
		{
			cout<<"Enter the name : ";
			cin>>name;

			cout<<"Enter the age : ";
			cin>>age;
		}
		int display()
		{
			cout<<"\nName : "<<name<<endl<<"Age : "<<age<<endl;
		}
};
class teacher:public Inheritance
{
		char sub[20];
	public:
		int input_sub()
		{
			input();
			cout<<"Enter the subject name : ";
			cin>>sub;
		}
		void  display_sub()
		{
			display();
			{
				cout<<"Subject : "<<sub;
			}
		}
};

int main()
{
	teacher obj;
	obj.input_sub();
	obj.display_sub();
	return 0;
}
