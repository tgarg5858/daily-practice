#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ifstream file("anil.txt",ios::in);
    // if(!file.is_open()){
    //     cout<< "error";
    // }
    // else{
    //     cout<<file.tellg()<<endl;
    //     string line;
    //     file.seekg(2);
    //     getline(file,line);
    //     cout<<line;
    // }
 ofstream file("anil.txt",ios::out);
    if(!file.is_open()){
        cout<< "error";
    }
    else{
    cout<< file.tellp()<<endl;
    file<< "anil shetty rocks";
    cout<< file.tellp()<<endl;
    file.seekp(5);
    file << "and he is awesome";
    cout<< file.tellp()<<endl;
        
    }
    return 0;
}