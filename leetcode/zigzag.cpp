#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "AB";
    int numRows=4;
    vector<pair<char,int>>v;
    int s_len=s.length();
    int c=1;
    bool flag=1;
    for(int i=0;i<s_len;i++){
        v.push_back({s[i],c});
        if(c==numRows || flag==0){
            if(c!=1){
                c--;
            }
            flag=0;
            if(c==1){
                flag=1;
            }
        }
        else{
            c++;
        }
    }
    string ans="";
    for(int i=1;i<=numRows;i++){
        for(int j=0;j<s_len;j++){
            if(v[j].second==i){
                ans+=v[j].first;
            }
        }
    }
    cout << ans;
}