#include<bits/stdc++.h>
using namespace std;

bool buildingOfSharpeners(int n, vector<int> arr){
    for(int i=1;i<n-1;i++){
       if(arr[i-1]>arr[i+1] && arr[i]>arr[i-1])
       return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
         }
         bool ans=buildingOfSharpeners(n,v);
         cout<<ans;
    }
    return 0;
}
