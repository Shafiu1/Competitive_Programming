#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,0,0,0};
    int n=nums.size();
    vector<int> temp(n,0);
    int j=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(nums[i]==0 and i>=j){
            break;
        }
        else{
            if(i+nums[i]>j){
                j=i+nums[i];
            }
        }
    }
    if(j>=n-1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    
}