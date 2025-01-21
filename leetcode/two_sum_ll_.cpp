#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target=9;
    int left=0, right=numbers.size()-1;
    while(left<right){
        if(numbers[left]+numbers[right]==target){
            // return {left+1,right+1};
        }
        else if(numbers[left]+numbers[right]>target){
            right--;
        }else{
            left++;
        }
    }// Your code here

}