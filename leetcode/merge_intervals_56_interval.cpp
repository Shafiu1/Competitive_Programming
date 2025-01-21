#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>interval={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans;
    sort(interval.begin(), interval.end());
    int i = 0;
    for (i = 0; i < interval.size() - 1; i++)
    {
        if (interval[i + 1][0] >= interval[i][1])
        {
            ans.push_back(interval[i]);
        }
        else
        {
            interval[i + 1][0] = interval[i][0];
        }
    }
    if (interval[i][0] >= interval[i - 1][1])
    {
        ans.push_back(interval[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}