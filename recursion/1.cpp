#include<bits/stdc++.h>
using namespace std;

bool IsPal(string a,int i , int j){
    if(i>j) return true;
    
    return (a[i]==a[j]) && IsPal(a,i+1,j-1);
    
}

int main (){
    string n="abccba";
   cout<< IsPal(n,0,5);

    return 0;
}