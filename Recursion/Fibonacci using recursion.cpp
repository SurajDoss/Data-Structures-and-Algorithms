#include<iostream>

using namespace std;

int fib(int i)
{
    if(i<=1)
        return i;
    return fib(i-2)+fib(i-1);
}

int main()
{
    int result = fib(6);
    cout<<result<<endl;
}
