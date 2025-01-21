#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int i=0,j=0,k=0,target=80;
    int sum=0,dif=INT_MAX;
    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    cout<<sum<<endl;
                    break;
                }
                else{
                    if(abs(target-sum)<dif){
                        dif=abs(sum-target);
                    }
                }
            }
        }
    }
}