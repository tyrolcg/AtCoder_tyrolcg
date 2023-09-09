#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    for(int i = 0;i<=n;i++){
        string s = "-";
        for(int j = 1;j<10;j++){
            if(n%j==0){
                if(i%(n/j)==0){
                    s = to_string(j);
                    break;
                }
            }
        }
        ans += s;
    }
    cout << ans << endl;
    
    return 0;
}