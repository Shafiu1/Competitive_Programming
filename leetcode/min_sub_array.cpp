#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 4, 4};
    int target=4,temp=0;
    vector <int> cum_sum;
    for(int i=0;i<nums.size();i++){
        temp=temp+nums[i];
        cum_sum.push_back(temp);
    }
    vector<int> ans;
    int i=0,j=0,min_len=INT_MAX;
    if(nums[0])
    for(int i=0;i<cum_sum.size();i++){
        if(cum_sum[i]>=target){
            ans.push_back(i+1);
        }
    }
    i=1;
    while(i<nums.size()){
        if(cum_sum[i]-cum_sum[j]>=target){
            ans.push_back(i-j);
            j++;
        }
        else{
            i++;
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size()>0){
        cout<<ans[0]<<endl;
    }
    else{
        cout<<0<<endl;
    }
}