#include<iostream>
using namespace std;

int main(){
// calculate the sum of all the elements in the given array.
    int array[] ={3,5,6,7};
    int size =sizeof(array)/sizeof(array[0]);

    int sum=0;
    for(int ind=0;ind<size;ind++){
        sum+=array[ind];

    }
    cout<<sum;
}