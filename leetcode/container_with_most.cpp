#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {1, 1};
    int left=0,right=height.size()-1;
    int max_area=0;
    while(left<right){
        int height_dif=min(height[left],height[right]);
        max_area=max(max_area,height_dif*(right-left));
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<max_area<<endl;
    return 0;
}