#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOneArray(vector<int> &v){
    int zeroCount=0;

    for(int ele:v){
        if(ele==0){
            zeroCount++;
        }   
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i<zeroCount)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    
    
}

int main(){

    //sort an Array consisting of only 0s and 1s ?
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sortZeroesAndOneArray(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    
    return 0;
}