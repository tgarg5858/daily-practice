#include<iostream>
using namespace std;

int main(){

    //sort an Array consisting of only 0s and 1s ?

    int array[8]{1,0,1,0,1,1,0,0};
    int one=0;
    int zero=0;
    for(int i = 0; i < 8; i++)
    {
        if (array[i]==0)
        {
            one++;
        }
        else{
            zero++;
        }
        
    }
    int ansarray[8];
    for (int i = 0; i < zero; i++)
    {
        ansarray[i]=0;
    }
    
    for (int i = zero; i < zero+one; i++)
    {
        ansarray[i]=1;
    }
    for (int i = 0; i < zero+one; i++)
    {
        cout<<ansarray[i]<<" ";
    }
    
    return 0;
}