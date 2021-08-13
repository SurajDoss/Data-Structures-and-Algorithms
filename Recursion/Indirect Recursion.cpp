#include <iostream>

using namespace std;
void funt_sec(int i);

void funt_first(int i){

    if(i>0){
        cout<<i<<endl;
        funt_sec(i-1);
    }

}

void funt_sec(int i){
    if(i>1){
        cout<<i<<endl;
        funt_first(i/2);
    }
}

int main(){

    int i =20;

    funt_first(i);
    return 0;

}
