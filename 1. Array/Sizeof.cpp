#include<iostream>
using namespace std;

int main(){

    int array[] = {1,2,3,4,5,6};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    // traversing through loop

    for(int i=0; i<=4; i++){
        cout<<array[i]<<endl;
    }

    return 0;
}