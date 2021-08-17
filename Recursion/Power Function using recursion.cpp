#include <iostream>

using namespace std;

int power(int m, int n)
{
    if(n==0)
        return 1;
    return power(m, n-1) * m;
}

int power1(int m, int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return power1(m*m, n/2);
    return m * power1(m*m, (n-1)/2);
}

int main(){

    int pow = power1(2, 9);
    cout<< pow<<endl;
    return 0;
}
