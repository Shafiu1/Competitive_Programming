#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=10,ans=0;
    while(n>=5){
        ans+=n/5;
        n/=5;
    }
    cout<<ans<<endl; // Your code here
    return 0;
}