#include<iostream>
using namespace std;

int main(){

    // Write a program to display multiplication of two matrices
    // entered by the user.
    /* | 1 2 |   | 5 6 |
       | 3 4 |   | 7 8 |   
    */

    int array[2][2]={{1,2},{3,4}};
    int array2[2][2]={5,6,7,8};
    int c[2][2];
    int ans=0;

    if (/*c1!=r2*/2!=2)
    {
        cout<<"matrix multiplication is not allowed";
    }
    
    for (int i = 0; i < 2; i++)
    {
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                ans+=array[i][k]*array2[k][j];

            }
            c[i][j]=ans;
        }
    }

    for (int i = 0; i < 2; i++)
    {   for (int j = 0; j < 2; j++)
    {
        cout<<c[i][j]<<" ";
    }cout<<endl;
    }
    
    return 0;
}