#include <iostream>

using namespace std;

int funt(int i){

    if(i>50){
        return i-10;
    }else{
        return funt(funt(i+11));
    }

}

int main(){

    cout<< funt(45)<<endl;
    return 0;

}
