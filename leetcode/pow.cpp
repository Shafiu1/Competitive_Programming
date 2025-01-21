#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 2.00000;
    int n=-2;
    if(x>0 && n>0){
        cout<<pow(x,n)<<endl;
    }
    else if(x>0 && n<0){
        cout<<1/pow(x,-n)<<endl;
    }
    else if(x<0 && n>0){
        cout<<pow(x,n)<<endl;
    }
    else if(x<0 && n<0){
        cout<<1/pow(x,-n)<<endl;
    }
    else if(x==0)
        cout<<0<<endl;
    else if(n==0)
        cout<<1<<endl;
    return 0;
}