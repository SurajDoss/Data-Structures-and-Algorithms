#include <iostream>
int y=0;
using namespace std;
int static_print(int a){
    //static int y = 0; //enable for static
    if(a>0){
        y++;
        return static_print(a-1)+y;
    }
    return 0;
}
int main(){

int a = 5;

cout<<static_print(a)<<endl;
//cout<<static_print(a)<<endl;

return 0;
}
