#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll unsigned long long

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int len = 1;
    
    vector<string> ary;
    for(int i = 0;i<n;i++){
        for(int j = 1;j <= n - i;j++){
            ary.push_back(s.substr(i, j));
            
        }
        sort(ary.begin(), ary.end());
        ary.erase(std::unique(ary.begin(), ary.end()), ary.end());
    }

    

    char check = ary[0][0];
    int ans = 0;
    for(ll i = 0;i<(ll)ary.size();i++){
        check = ary[i][0];
        if(ary[i].find_first_not_of(check)==string::npos){
            //すべておなじ
            ans++;
            
        }
    }
    cout << ans;
    return 0;
}
