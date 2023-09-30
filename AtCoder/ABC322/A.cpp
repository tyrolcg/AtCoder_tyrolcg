#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = s.find("ABC");
    if(ans!=-1) ans +=1;
    cout << ans << endl;
    
    return 0;
}