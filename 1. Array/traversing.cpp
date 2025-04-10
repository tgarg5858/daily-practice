#include<iostream>
using namespace std;

int main(){

    int array[] = {1,2,3,4,5};

    // traversing through loop

    for(int i=0; i<=4; i++){
        cout<<array[i]<<endl;
    }

    //each loop
    
    for(int ele:array){
        cout<<ele<<endl;
    }
    //while loop
    
    int index=0;
    while(index<5){
        cout<<array[index]<<endl;
        index++;
    }

    return 0;
}
