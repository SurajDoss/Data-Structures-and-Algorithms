#include <iostream>

using namespace std;

double e(int x, int n)
{
    static double p=1, f =1;
    double result;

    if(n==0)
        return 1;
    result = e(x, n-1);
    p = p*x;
    f = f*n;
    return result+p/f;
}

int main()
{
    double taylor_series = e(3,10);

    cout<<taylor_series<<endl;
    return 0;
}
