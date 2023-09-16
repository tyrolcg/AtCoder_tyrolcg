#include<iostream>
#include<cmath>
#include <iomanip>
#include <string>
using namespace std;

bool isPalindrome(string s){
    int len = s.length();
    for(int i = 0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int len = s.length();

    int ans = 1;
    // iは文字列の長さ
    for(int i = len;i>0;i--){
        // jは文字列の開始点
        for(int j = 0;j<len - i;j++){
            if(isPalindrome(s.substr(j,i+1))){
                cout << i + 1;
                return 0;
            }
        }
    }
    cout << 1;
    return 0;
}