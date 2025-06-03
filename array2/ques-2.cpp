#include<iostream>
using namespace std;

int main(){

    // Count the number of triplets whose sum is equal to the given value x ?

        int array[]={3,1,2,4,0,6};
        int target_sum=5;
        int triplets=0;

        for (int i = 0; i < 6; i++)
        {
            for (int j = i+1; j < 6; j++)
            {
                for (int k = j+1; k < 6; k++)
                {
                    if (array[i]+array[j]+array[k]==target_sum)
                    {
                        triplets++;
                    }
                    
                }
                
            }
            
        }
        cout<<triplets<<endl;

    return 0;
}