#include <iostream>

using namespace std;

int funt_fact(int n)
{
    if(n==0)
        return 1;
    return funt_fact(n-1)*n;
}

int main ()
{
    int n = 9;

    int fact = funt_fact(n);
    cout<<fact<< endl;
    return 0;

}
