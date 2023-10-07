#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 1; i <= s.length(); i++){
        if(i%2==0){
            if(s[i-1]=='1'){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}