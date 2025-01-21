#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {};
    int ans=1,count=1;
    if(nums.size()==0){
        ans=0;
        count=0;
        cout<<0<<endl;
        return 0;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]>nums[i]+1){
            ans=max(ans,count);
            count=1;
        }
        else{
            if(nums[i+1]!=nums[i]){
                count++;
            }
        }
    }
    cout<<max(ans,count)<<endl;
}