#include<iostream>
using namespace std;

// int largest (int array[], int size ){
//      int max=INT16_MIN;
//      int index;
//      for (int i = 0; i < size; i++)
//     {
//         if (array[i]>max)
//         {
//             max=array[i];
//             index=i;
//         }
        
//     }return index;

// }

int second_largest(int array[],int size){
    int max = INT8_MIN;
    int secondlargest=-1;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > secondlargest && array[i]!=max )
        {
            secondlargest=array[i];
        }
        
    }

    return secondlargest;
    
}

int main(){

    // find the second largest element in the given array ?

   
     int array[]={2,3,5,7,6,1,7};
     
    // int large = largest(array,6);
    // array[large]=-1;
    // int secondlarge = largest(array,6);
    // cout<<array[secondlarge];
    
    cout<<second_largest(array,7)<<endl;
    return 0;
}