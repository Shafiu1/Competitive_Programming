#include <bits/stdc++.h>
using namespace std;

int main() {
    int left=21,right=49,ans=0;
    int iter=floor(log2(left));
    int pow_cal=pow(2,iter);
    while(iter>=0){
        if(left & pow_cal & right){
            ans+=pow(2,iter);
            iter--;
            pow_cal=pow(2,iter);
        }else{
            break;
        }
    }
    cout<<ans<<endl; // Your code here
    return 0;
}