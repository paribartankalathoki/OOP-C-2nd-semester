#include <iostream>

using namespace std;

int area(int l, int b)
{
    return l*b;
}

int main()
{
    int l,b;
    cout<<"Enter the length and breadth : ";
    cin>>l>>b;

    cout<<"Area : "<<area(l,b);

    return 0;
}
