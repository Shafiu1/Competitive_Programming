#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
    vector<int> vec = {7, 6, 4, 3, 1};
    int max_sell=vec[vec.size()-1];
    for(int i=vec.size()-1;i>=0;i--){
        max_sell=max(vec[i],max_sell);
        if(max_sell-vec[i] > ans){
            ans=max_sell - vec[i];
        }
    }
    cout<<ans<<endl;
}