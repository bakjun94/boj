#include <iostream>
using namespace std;

int fpow(int a, int b){
    int sup=1;
    while(b>1){
        if(b&1)
            sup*=a;
        a*=a;
        b/=2;
    }
    sup=a*sup;
    return sup;
}
/*
int fpow(int a, int b){
    if(b==1)return a;
    if(b&1)return pow(a,b-1)*a;
    return pow(a,b/2)*pow(a,b/2);
}*/

int main(){
    int a=2;
    int b=10;
    cout<<fpow(a,b);
    return 0;
}