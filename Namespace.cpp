#include<iostream>

namespace Marvellous
{
    class Demo
    {
        // logic
    };
}

namespace PPA
{
    class Hello
    {
        //logic
    };
}

using namespace Marvellous;

int main()
{
    std :: cout<<"Inside main\n";       // instead of using namespace std we can use std::cout and std:: cin
    Demo dobj;

    PPA :: Hello hobj;

    return 0;
}
