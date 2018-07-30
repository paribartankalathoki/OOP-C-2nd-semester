#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
    char o;
    do
    {
        int num1,num2,sum;
        cout<<"Enter any two number"<< endl;
        cin>>num1>>num2;
        cout<<"\n Enter respective operators to perform: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Reminder \n 6.Exit"<<endl;
        cin>>o;
        switch(o)
        {
        case '+':
            sum=num1+num2;
            cout<<"The sum of : "<< num1<< "+" << num2 << "=" << sum << endl;
            break;
        case '-':
            cout<<"The different of : " << num1 << "-" << num2 << "=" << num1-num2 << endl;
            break;
        case '*':
            cout<<"The product of : " << num1 << "*" << num2 << "=" << num1*num2 << endl;
            break;
        case '/':
            cout<<"The quotient of : " << num1 << "/" << num2 << "=" << num1/num2 << endl;
            break;
        case '%':
            cout<<"The reminder of : " << num1 << "%" << num2 << "=" << num1%num2 << endl;
            break;
        default:
            cout<< "Error! operator is not correct"<< endl;
            break;
        }
    }
    while (o == '+' || o == '-' || o == '*' || o == '/' || o == '%');
    getch();
    return 0;
}
