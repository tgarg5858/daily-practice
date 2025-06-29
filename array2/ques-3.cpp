#include<iostream>
using namespace std;

int main(){

    // find the unique number in a given Array where all the elements are
    // being repeated twice with one value being unique ?

    int array[]={2,3,1,3,2,4,1};
    int unique=-1;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (array[i]==array[j])
            {
                array[i]=0;
                array[j]=0;
            }
            
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        if (array[i]!=0)
        {
            cout<<"the unique value is: ";
            cout<<array[i];
        }
        
    }
    
    
    return 0;
    
}