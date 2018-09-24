#include <iostream>
#include <pthread.h>
using namespace std;

int threadfunc()
{
    cout<<"Welcome"<<endl;
}

int main()
{
    pthread functiontest(threadfunc);

    return 0;
}
