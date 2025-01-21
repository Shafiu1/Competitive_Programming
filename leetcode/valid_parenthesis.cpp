#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "({[]})";
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
        else{
            if(int(s[i])==int(st.top())+2 || int(s[i])==int(st.top())+1)
                st.pop();
            else{
                cout<<"false";
                return 0;
            }
        }
    }
    if(st.empty())
        cout<<"true";
    else
        cout<<"false";
    return 0;
}