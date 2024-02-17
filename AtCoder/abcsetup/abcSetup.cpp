#include<iostream>
#include<string>
#include<sys/stat.h>
using namespace std;

int main(int argc, char *argv[]){

    if(argc != 2) cerr << "引数が不正です" << endl;
    string contest_type = "ABC";
    int contest_number = (int)argv[1];

    
    
    return 0;
}

class TargetFileStructure{
public :
    string DirectoryPath;
    string ContestType;
    int ContestNumber;

    void MakeDirectory(){
        mkdir(DirectoryPath)
    }
};