#include<iostream>
using namespace std;

int main(){
    char vowel[5];
    //insertion through for loop
    // for(int i=0;i<5;i++){
    //     cin>>vowel[i];
    // }

    //insertion through for each loop
    for(char &ele:vowel){
        cin>>ele;
    }
    for(int i=0;i<5;i++){
        cout<<vowel[i]<<" ";
    }

    return 0;
}