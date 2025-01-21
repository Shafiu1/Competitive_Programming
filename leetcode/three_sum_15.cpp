#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>> res;
    vector<int> temp;
    for(int i=0;i<nums.size()-2;i++){
        int left=i+1,right=nums.size()-1;
        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum==0){
                temp.push_back(nums[i]);
                temp.push_back(nums[left]);
                temp.push_back(nums[right]);
                res.push_back(temp);
            }
            left++;
            right--;
        }
    }
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}