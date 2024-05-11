#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        Demo()
        {
            A = 10;
            cout<<"inside Demo constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Demo\n";
        }
};

class Hello
{
    public:
        int B;
        Hello()
        {
            B = 20;
            cout<<"Inside Hello constructor\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Hello";
        }
};

class Marvellous : public Hello, public Demo
{
    public:
        int C;
        Marvellous()
        {
            C = 30;
            cout<<"Inside Marvellous construction\n";
        }
        ~Marvellous()
        {
            cout<<"Inside Marvellous Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Marvellous\n";
        }
};

int main()
{
    Marvellous mobj;

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";
    return 0;
}