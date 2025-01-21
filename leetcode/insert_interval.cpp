#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> intervals={{1,3},{6,9},{2,5}};
    vector<int> newInterval={2,5};
    vector<vector<int>> ans;
    int flag=0;
    int min=0;
    for(int i=0;i<intervals.size();i++){
        if(newInterval[0] > intervals[i][0] && newInterval[0] < intervals[i+1][0]){
            min=newInterval[0];
            flag=1;
        }
        if(flag==1){
            if(newInterval[1] < intervals[i][0])
        }
    }
    
}