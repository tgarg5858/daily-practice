#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("anil.txt",ios::in | ios::out | ios::app);
    if(!file.is_open()){
        cout<<"error while opening the file"<<endl;
    }
    else{
        cout<<"file opened successfully"<<endl;
        cout<<"writing to the file"<<endl;

        file << "learning lad rocks"<<endl;

        file.seekg(0);
        cout<<"reading from the file"<<endl;
        string line;
        while(file.good()){
            getline(file,line);
            cout<<line<<endl;
        }
    }
    return 0;
}