#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;
bool is321Num(int n){
    string s = std::to_string(n);
    bool flag = true;
    if(s.length()==1){
        return true;
    }
    for(int i = 0;i<s.length()-1;i++){
        if(s[i]-0>s[i+1]-0){
            
        }
        else{
            return false;
        }
    }
    return flag;
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    int k = 1;
    while(count<n){
        if(is321Num(k)) count++;
        k++;
    }
    cout << --k;
    
    return 0;
}