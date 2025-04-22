#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Given Q queries, check if the given number is present in the array or not.
    // Note: Value of all the elements in the array is less than 10 to the power 5 ?

    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    const int N = 1e5 +10;
    vector<int> freq(N);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    int q;
    cout<<"enter the queries: ";
    cin>>q;
    while (q--)
    {
        int queryElement;
        cin>>queryElement;
        cout<<freq[queryElement]<<endl;
    }
    
    return 0;
}