#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

class bill
{
        int price,qty,x,p,v,cid;
        float m,nt;
        char cnam[30],itnam[30];
    public:

        int input()
        {
            cout<<"\n Enter customer Id : ";
            cin>>cid;
            cout<<endl;
            cout<<"\n Enter customer name : ";
            cin.sync();
            cin.getline(cnam, 30);
            cout<<endl;
            cout<<"\n Enter total quantity : ";
            cin>>qty;
            cout<<endl;
            cout<<"\n Enter Item Name : ";
            cin.ignore();
            cin.getline(itnam, 30);
            cout<<endl;
            cout<<"\n Enter the price per item : ";
            cin>>price;
            for(int i=0;i<20;i++)
            {
                cout<<endl;
            }
        }
        int display()
        {
            int v=13;
            cout<<"\n\n Department Bill "<<endl<<endl;
            cout<<"\n ------------------------------------"<<endl;
            cout<<"\n Customer ID    : "<<cid<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Customer Name  : "<<cnam<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Item Name      : "<<itnam<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Total Quantity : "<<qty<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Item per price : "<<price<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n total Amount   : "<<x<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Vat            : "<<v<<"%"<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n vat Amount     : "<<m<<endl<<endl;
            cout<<" -------------------------------------"<<endl;
            cout<<"\n Net Amount     : "<<nt<<endl<<endl;
            cout<<" -------------------------------------"<<endl;

        }
        int total()
        {   x=qty*price;
            return x;
        }
        bill()
        {
            p=13;
        }
        float calc()
        {
            m=(qty*price)*0.13;
            nt=(qty*price)+m;
            return nt;
            return m;
        }

        int getcid()
            {
                return cid;
            }

};

void findbill()
        {
            bill obj;
            ifstream fin;
            int key;
            int found=0;
            fin.open("Bill.txt",ios::binary|ios::in);
            fin.read((char *)&obj, sizeof(bill));
            cout<<"\n Enter the Customer Id to Search : ";
            cin>>key;
            while(fin)
            {
                if(key==obj.getcid())
                {
                    obj.total();
                    obj.calc();
                    system("cls");
                    obj.display();
                    found=1;
                }
                fin.read((char *)&obj,sizeof(bill));
            }
            if(found==1)
                {
                    cout<<"\n Successfully Searched...."<<endl;
                }
            else
                {
                    cout<<"\n Search not  found..."<<endl;
                }
                fin.close();

                 for(int i=0;i<6;i++)
                {
                    cout<<endl;
                }
                system("pause");

        }

        void editbill()
        {
            bill obj;
            fstream fin;
            int key;
            int found=0,pos;
            fin.open("Bill.txt",ios::binary|ios::in|ios::out);
            fin.read((char *)&obj,sizeof(bill));
            cout<<"\n Enter customer id for update :";
            cin>>key;
            while(fin)
            {
                if(key==obj.getcid())
                {
                    system("cls");
                    cout<<"\n Previously Existing Bill Record : "<<endl;
                    cout<<"\n -------------------------------"<<endl<<endl;
                    obj.total();
                    obj.calc();
                    obj.display();
                    found=1;
                    pos=fin.tellg()-sizeof(bill);
                    cout<<"\n Pos = "<<pos<<endl<<endl;
                    fin.seekp(pos,ios::beg);
                    cout<<"\n Edit Bill Now : "<<endl;
                    obj.input();
                    fin.write((char *)&obj,sizeof(bill));
                }
                fin.read((char *)&obj,sizeof(bill));
            }
            if(found==1)
            {
                cout<<"\n Edit Successfully ..."<<endl;
            }
            else
            {
                cout<<"\n Can't Edit No more ..."<<endl;
            }
            fin.close();
        }

        void delbill()
        {
            fstream fin("Bill.txt", ios::in|ios::binary);
            int r;
            fstream newfin("BillNew.txt",ios::out|ios::binary);
            bill obj;
            cout<<"\n Enter custotemer id to delete : ";
            cin>>r;
            fin.read((char *)&obj,sizeof(bill));
            while(fin)
            {
                if (r!=obj.getcid())
                {
                    newfin.write((char *)&obj,sizeof(bill));
                }
                fin.read((char *)&obj,sizeof(bill));
            }
            fin.close();
            newfin.close();

            fstream fin2("Bill.txt",ios::out|ios::binary);
            fstream newfin2("BillNew.txt",ios::in|ios::binary);
            newfin2.read((char *)&obj,sizeof(bill));
            while(newfin2)
            {
                newfin2.write((char *)&obj,sizeof(bill));
                newfin2.read((char *)&obj,sizeof(bill));
            }
            fin2.close();
            newfin2.close();

        }
int main()
{
    bill obj;

    int ch;
    do
    {
        system("cls");
        cout<<"\n\n You are Heartily Welcome to OUR Project."<<endl;
        cout<<"\n It is a project about Departmental Store Billing"<<endl;
        cout<<"\n ---------  Menus  ---------"<<endl;
        cout<<"\n 1. Add Bill"<<endl<<"\n --------------------------"<<endl<<"\n 2. Display Bill"<<endl<<"\n --------------------------"<<endl<<"\n 3. Search Bill"<<endl<<"\n --------------------------"<<endl<<"\n 4. Edit Bill"<<endl<<"\n --------------------------"<<endl<<"\n 5.Delete Bill"<<endl<<"\n --------------------------"<<endl<<"\n 6. Exit"<<endl<<"\n --------------------------"<<endl;
        cout<<"\n Enter your choice : ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
            system("cls");
            obj.input();
            ofstream fout;
            system("pause");
            fout.open("Bill.txt",ios::app);
            fout.write((char *)&obj, sizeof(obj));
            fout.close();
            break;
            }
        case 2:
            {
                system("cls");
                ifstream fin;
                fin.open("Bill.txt",ios::binary|ios::in);
                fin.read((char *)&obj,sizeof(obj));
                while(fin)
                {
                    obj.total();
                    obj.calc();
                    system("cls");
                    obj.display();
                    fin.read((char *)&obj, sizeof(obj));
                }
                fin.close();
                system("pause");
                break;
            }
        case 3:
            {
                findbill();
                break;
            }
        case 4:
            {
                editbill();
                break;
            }
        case 5:
            delbill();
            break;
        }
    }while(ch<6);

    return 0;
}
