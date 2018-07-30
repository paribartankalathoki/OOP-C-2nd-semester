#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
namespace digit
{
    int count=0;
};
namespace character
{
    int count=0;
};
namespace other
{
    int count=0;
};
int main()
{
    char str[]="1.Nepal 2.India 3.China";
    int i=0;
    while(str[i]!='\0')
    {
        if(isdigit(str[i]))
            character::count++;
        else if(isalpha(str[i]))
            digit::count++;
        else
            other::count++;
            i++;
    }
    cout<<"\nNumber of digit="<<digit::count;
    cout<<"\nNumber of digit="<<character::count;
    cout<<"\nNumber of digit="<<other::count;
    getch();
    return 0;
}
