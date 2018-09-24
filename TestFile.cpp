#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int l,m[5];
    char sub[5][20]={"java","computer","c++","c","internet"};
    cout<<"\t Enter marks of 5 sub : "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>m[i];
    }
    float per,tot=0.0;

    cout<<"\t Subject "<<setw(15)<<" Marks "<<endl;
    cout<<"\t -----------------------------"<<endl;

    for(int i=0; i<5; i++)
    {
        tot=tot+m[i];
        l=strlen(sub[i]);

        cout<<"\t "<<sub[i]<<setw(22-l)<<m[i]<<endl;
    }

    per=tot/5;
    cout<<"\t Total : "<<setw(18)<<tot<<endl;
    cout<<"\t Percentage : "<<setw(10)<<setprecision(2)<<per<<endl;

    return 0;
}

            /*


                    #include <iostream>
                    #include <iomanip>
                    #include <string.h>
                    #include <ctype.h>
                    #include <stdlib.h>
                    using namespace std;
                    namespace info
                    {
                        void data()
                        {
                            cout<<" Enter name : ";
                            char str[20];
                            cin.getline(str,10);
                            cout<<endl;
                            cout<<" Enter age : ";
                            int i;
                            cin>>i;
                            system("pause");
                            system("cls");
                            cout<<endl;
                            cout<<" Name : "<<str<<endl;
                            cout<<" Age : "<<i<<endl;
                        }
                    }
                    int main()
                    {
                        info::data();
                        return 0;
                    }

                */
