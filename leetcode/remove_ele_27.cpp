#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = j; i < nums.size(); i++)
    {
        nums[i] = 100;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return j;
}

int main(){
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout<<removeElement(nums,2)<<endl;
}