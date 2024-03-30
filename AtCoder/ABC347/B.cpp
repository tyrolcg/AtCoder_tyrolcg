#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int ans = 0;
    for(int i = 0; i<len;i++){
        for(int j = 0; j < len - i; j++){
            string fragment = s.substr(j, i+1);
            if(s.find(fragment)==j){
                //cout << fragment << endl;
                ans++;
            }
        }
        
    }
    cout << ans << endl;
    
    
    return 0;
}