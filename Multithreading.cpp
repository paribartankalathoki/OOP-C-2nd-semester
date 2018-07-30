#include <iostream>
#include <thread>
using namespace std;

int threadfunc()
{
    cout<<"Welcome"<<endl;
}

int main()
{
    thread functiontest(threadfunc);

    return 0;
}