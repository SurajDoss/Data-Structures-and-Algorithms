#include <iostream>

using namespace std;

int SumofN(int n){

    if(n == 0){
        return 0;
    }else {
        return SumofN(n-1)+n;
    }
}

int main(){

    int n = 5;
    int sum;
    sum = SumofN(n);
    cout<<sum<< endl;
    return 0;

}
