#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> vec;
    cin>>n;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int max=vec[0];
    int min=vec[0];
    for(int i=0;i<n;i++)
    {
        if(vec[i]>min){
            max=vec[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(vec[i] < min)
        {
            min = vec[i];
        }
    }
    cout<<"The largest number of these array is: "<<max<<endl;
    cout<<"The minimum number of these array is: "<<min<<endl;
}