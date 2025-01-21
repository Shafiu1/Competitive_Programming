#include<bits/stdc++.h>
using namespace std;
int main(){
    string haystack = "mississippi", needle = "issi";
    int n = haystack.size();
    if (n < needle.size())
        return -1;
    int j = 0, i = 0;
    for (i = 0; i < n && j < needle.size(); i++)
    {
        if (haystack[i] == needle[j])
        {
            j++;
            cout<<i<<" "<<j<<endl;
            cout<<i<<" "<<j<<endl;
        }
        else
        {
            i = i - j;
            j = 0;
        }
    }
     cout<<i-j<<endl;
     return j == needle.size() ? i - j: -1;
}