#include<iostream>
using namespace std;

template <class T>
T Addition(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

template <class T>
T Maximum(T iNo1, T iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int A = 11;
    int B = 21;
    int Ans = 0;

    Ans = Addition(A, B);
    cout<<"Addition is :"<<Ans<<"\n";
    Ans = Maximum(A,B);
    cout<<"Largest number is:"<<Ans<<"\n";

    float X = 90.78f, Y = 60.99f, Ret = 0.0f;
    Ret = Addition(X, Y);
    cout<<"Addition is :"<<Ret<<"\n";
    Ret = Maximum(X,Y);
    cout<<"Largest number is:"<<Ret<<"\n";

    return 0;
}