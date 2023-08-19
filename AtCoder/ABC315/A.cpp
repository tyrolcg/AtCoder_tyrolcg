#include<iostream>
#include<vector>
#include<string>
#define ll long long

using namespace std;

bool isMach(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    for(int i=0;i < n;i++){
        if(!isMach(s[i])){
            ans += s[i];
        }
    }
    cout<<ans<<endl;
    
}