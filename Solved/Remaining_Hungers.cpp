#include<bits/stdc++.h>
using namespace std;

int countRemainingHungers(int n, vector<int> student_queue, vector<int> parathe_stack){
    stack<int>p_stack;
    queue<int>s_queue;
    for(int i=0;i<n;i++){
        s_queue.push(student_queue[i]);
        p_stack.push(parathe_stack[n-i-1]);
    }
    int terminate_count=0;
    while(!s_queue.empty() && terminate_count!=s_queue.size()){
        if(s_queue.front() == p_stack.top()){
            s_queue.pop();
            p_stack.pop();
            terminate_count=0;
        }
        else{
            terminate_count++;
            int t=s_queue.front();
            s_queue.push(t);
            s_queue.pop();
        }
    }
    return s_queue.size();
    return 1;
}

int main(){
    int n;
    cin<<n;
    vector<int>v1,v2;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v1.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v2.push_back(t);
    }
    int ans=countRemainingHungers(n,v1,v2);
    cout<<ans;
    return 0;
}