#include<iostream>
using namespace std;

int main(){
    // Search if a given element is present in the array or not.
    // If it is not present then return -1 else return the index.
    int array[] ={3,11,16,6,5,7};
    int size =sizeof(array)/sizeof(array[0]);

    int key=5;
    int ans=-1;

    for(int i=1;i<size;i++){
        
        if (array[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans;
    
}