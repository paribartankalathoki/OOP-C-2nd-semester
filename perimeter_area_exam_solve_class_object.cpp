#include <iostream>
using namespace std;

class rectangle
{
    private:
        int length,breath;
    public:
        void input();
        int findarea();
        int perimeter();
};

        void rectangle::input()
        {
            cout<<"Enter the length and breadth of rectangle:\t";
            cin>>length>>breath;
        }
        int rectangle::findarea()
        {
            cout<<"Area = " <<length*breath<<endl;
        }
        int rectangle::perimeter()
        {
            cout<<"perimeter = " <<2*(length+breath)<<endl;
        }

int main()
{
    rectangle obj;
    obj.input();
    obj.findarea();
    obj.perimeter();

    return 0;
}
