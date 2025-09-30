#include<iostream>
using namespace std;
int main(){
    int a,b,c = 12;
    for(int i = 0; c > 0; i++){
        a = c>>1;
        b = c/10;
        cout<<a<<'\t'<<c<<'\t'<<c % 2<<endl;
        c= c / 2;
    }
    return 0;
}
