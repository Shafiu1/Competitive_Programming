#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<string>> main()
{
    vector<string> strs = {};
    vector<vector<string>> ans;
    map<string, int> map;   

    int map_i = 0;

    for (int i = 0; i < strs.size(); i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        if (map.find(temp) != map.end())
        {
            ans[map[temp]].push_back(strs[i]);
        }
        else
        {
            // If it's a new group, create it
            map[temp] = map_i;
            ans.push_back(vector<string>());
            ans[map_i].push_back(strs[i]);
            map_i++;
        }
    }
    return ans;
}
