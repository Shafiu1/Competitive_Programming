#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcabcbb";
    int ans = 0;
    map<char, int> map;
    int j=0;
    for (int i = 0; i < s.size(); i++)
    {
        char a = s[i];
        if(map.find(a)!=map.end() and map[a]>=j){
            j=map[a]+1;
        }
        ans=max(ans,i-j+1);
        map[a]=i;
    }
    cout<< ans;
}