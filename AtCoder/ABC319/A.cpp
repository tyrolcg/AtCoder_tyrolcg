#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> list = {3858,
                        3679, 
                        3658,
                        3648,
                        3638,
                        3630,
                        3613,
                        3555,
                        3516,
                        3481};
    if(s=="tourist") cout << list[0];
    else if (s=="ksun48") cout << list[1];
    else if (s=="Benq") cout << list[2];
    else if(s=="Um_nik") cout << list[3];
    else if(s=="apiad") cout << list[4];
    else if(s=="Stonefeang") cout << list[5];
    else if(s=="ecnerwala") cout << list[6];
    else if(s=="mnbvmar") cout << list[7];
    else if(s=="newbiedmy") cout << list[8];
    else if(s=="semiexp") cout << list[9];
    
    return 0;
}