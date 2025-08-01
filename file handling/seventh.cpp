#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char input[100];
    strcpy(input,"learning lad rocks");
    
    fstream file("anil.bin",ios::binary | ios :: in|ios :: out|ios::trunc);

    if(file.is_open()){
        cout<<"error";
    }
    else{
        int lenght = strlen(input);
    for(int counter = 0; counter <= lenght; counter++){
        file.put(input[counter]);
    }

    file.seekg(0);
    char ch ;
    while(file.good()){
        file.get(ch);
        cout<<ch;
    }
    }
    return 0;
}