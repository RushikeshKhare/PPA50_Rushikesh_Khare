#include<iostream>
using namespace std;

class Marvellous
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

class Demo : public Marvellous
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

class Hello : public Marvellous
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

int main()
{
    Demo dobj;
    Hello hobj;

    return 0;
}