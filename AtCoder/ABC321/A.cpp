#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s = std::to_string(n);
    bool flag = true;
    if(s.length()==1){
        cout << "Yes";
        return 0;
    }
    for(int i = 0;i<s.length()-1;i++){
        if(s[i]-0>s[i+1]-0){
            
        }
        else{
            flag = false;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout <<"No";
    }
    return 0;
}