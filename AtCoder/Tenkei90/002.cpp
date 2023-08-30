#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isOK(string s){
    int cnt = 0;
    for(int i = 0;i<s.size(); i++){
        if(s[i]=='(') cnt++;
        if(s[i]==')') cnt--;
        if(cnt<0) return false;
    }
    if(cnt == 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    
    // n <= 20なのでbit全探索可能
    // 1<<n -> 2^n
    for(int i = 0;i<(1<<n); i++){
        string s = "";
        for(int j = n-1; j>=0; j--){
            if((i&(1<<j))==0){
                s+="(";
            }
            else{
                s+=")";
            }
        }
        if(isOK(s)){
            cout << s <<endl;
        }
    }
    return 0;
}