#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("anil.txt");

    if(!file.is_open()){
        cout<<"unable to open the file"<<endl;
    }
    else{
        file <<"hi am Tushar Garg"<<endl;
        file <<"hi i am awesome...";
        file.close();
        cout<< "successfully written to the file open it and check it out";
    }

    return 0;
}