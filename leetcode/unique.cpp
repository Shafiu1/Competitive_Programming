#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={3,2,2,32,2,4,3};
    map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    vector<int> temp;
    for(auto u:m){
        temp.push_back(u.second);
    }
    sort(temp.begin(),temp.end());
    for( int i=0;i<temp.size()-1;i++){
        if(temp[i]==temp[i+1])
            return false;
    }
    return true;
}