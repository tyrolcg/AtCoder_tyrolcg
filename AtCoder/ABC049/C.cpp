#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isMatch(string s){
    vector<string> kouho = {"erase", "eraser", "dream", "dreamer"};
    for(int i = 0;i<4;i++){
        reverse(kouho[i].begin(), kouho[i].end());
    }
    reverse(s.begin(), s.end());
    
    for(int i = 0;i<s.size();){
        bool prefixMatch = false;
        for(int j = 0;j<4;j++){
            string prefix = kouho[j];
            if(s.substr(i, prefix.size()) == prefix){
                prefixMatch = true;
                i += prefix.size();
            }
        }
        if(!prefixMatch){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isMatch(s)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}