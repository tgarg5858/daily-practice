#include<bits/stdc++.h>
using namespace std;

void prevGreater(vector<int> &arr){
    int n = arr.size();
    stack<int>s;
    for(int i=0;i<n;i++){
        while(s.empty() == false and arr[i] >= s.top()){
            s.pop();
        }
        if(s.empty())cout<<-1<<" ";
        else cout<<s.top()<<" ";
        s.push(arr[i]);
    }
}

int main()
{
    vector<int> arr = {10,20,5,14,3,2,12};
    prevGreater(arr);
    return 0;
}