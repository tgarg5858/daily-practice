#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;

    file.open("anil.txt",ios :: in | ios :: out | ios :: trunc );

    if(!file.is_open()){
        cout<<"error while opening the file";
    }
    else{
        //read or write
        cout<<"file opened successfully";
        file.close();
    }

    return 0;
}