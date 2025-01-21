#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> gas = {2, 3, 4};
    vector<int> cost = {3, 4, 3};
    int gas_total=0,cost_total=0;
    gas_total=accumulate(gas.begin(),gas.end(),0);
    cost_total=accumulate(cost.begin(),cost.end(),0);
    int ans = 0;
    if(gas_total<cost_total)
        cout<< -1<<endl;
    else{
        int sum=0;
        for(int i=0;i<gas.size();i++){
            sum+=gas[i]-cost[i];
            if(sum<0){
                ans=i+1;
                sum=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}