#include<iostream>
using namespace std;

int main(){

    // find the total number of pairs in the Array whose
    // sum is equal to the given value x.

    int array[5]={3,4,6,7,1};

    int x;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    int output=0;
    //cout<<sizeof(array)<<endl;

    for(int i=0;i<5;i++){

        for (int j = i+1; j < 5; j++)
        {
        if (array[i]+array[j]==x && i!=j)
        {
            output++;
        }
        }
        
    }
    cout<<output<<endl;

    return 0;
}