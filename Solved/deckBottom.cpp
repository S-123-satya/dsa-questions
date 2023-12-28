#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n){
    queue<int>arr;
    vector<int>ans;
    for(int i=1;i<n+1;i++) arr.push(i);
    int t=arr.front();
    arr.push(t);
    arr.pop();
    ans.push_back(arr.front());
    arr.pop();
    while(!arr.empty()){
        arr.push(arr.front());
        arr.pop();
        arr.push(arr.front());
        arr.pop();
        ans.push_back(arr.front());
        arr.pop();
    } 
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>v=solve(5);
    for(auto a:v) cout<<a<<" ";
    return 0;
}