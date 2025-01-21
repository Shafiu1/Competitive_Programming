#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> points ={{1,2},{2,3},{3,4},{4,5}};
    int ans=0;
    sort(points.begin(),points.end());
    int n=points.size(),count=1;
    int i=n-1;
    int j = i - 1;
    while(j>=0){
        if(points[j][1]>=points[i][0])
            j--;
        else{
            count++;
            i=j;
            j--;
        }
    }
    cout<<count<<endl;
    return 0;
}