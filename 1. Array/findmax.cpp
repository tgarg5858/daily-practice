#include<iostream>
using namespace std;

int main(){
    // Find the maximum value out of all the elements in the array.
    int array[] ={3,11,16,7};
    int size =sizeof(array)/sizeof(array[0]);

    int max=array[0];
    for(int ind=1;ind<4;ind++){
        
        if (array[ind]>max){
            max=array[ind];
        }
        

    }
    cout<<max;
}