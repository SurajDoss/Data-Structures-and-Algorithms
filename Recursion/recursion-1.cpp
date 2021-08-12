//Recursion example tail head
#include <iostream>

using namespace std;
void printnum_dsc(int n){
    if(n>0){
        cout<<n<<endl;
        printnum_dsc(n-1);
    }
}

void printnum_asc(int n){
    if(n>0){
        printnum_asc(n-1);
        cout<<n<<endl;
    }
}

int main(){
int n;
n = 10;
printnum_dsc(n);
cout<<endl;
printnum_asc(n);
}
