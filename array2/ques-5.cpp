#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    // Rotate the given array 'a' by k steps, where k is non-negative.
    // Note: k can be greater than n as well where n is the size of array 'a' ?

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
int k=2;
k=k%v.size();

reverse(v.begin(),v.end());
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());

for (int a:v)
{
    cout<<a<<" ";
}

//     int array[]={1,2,3,4,5};
//     int n=5;
//     int k;
//     cin>>k;
//     // k can be greater than n.
//     k%=n;
//     int j=0;
    
//     int ansarray[n];

//     for (int i = n-k; i < n; i++)
//     {
//         ansarray[j]=array[i];
//         j++;
//     }

//     for (int i = 0; i < n-k; i++)
//     {
//         ansarray[j]=array[i];
//         j++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<ansarray[i]<<" ";
//     }
    
    

   return 0;
}