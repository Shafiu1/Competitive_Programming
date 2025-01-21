#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = {"  the sky is blue  "};
    vector<string> v;
    string temp="";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(temp.size()>0){
                if(temp.size()>0)
                    v.push_back(temp);
                temp="";
                count++;
            }
        }
        else
        {
            temp += s[i];
        }
    }

    if(temp.size()>0){
        v.push_back(temp);
    }

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v.size()-1==i){
            cout<<v[i]<<endl;
        }
        else{
            cout<<v[i]<<" ";
        }
    }
    cout<<v.size()<<endl;
    return 0;
}