#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s;
    cin >> t;

    int ans = 0;
    bool isInit = t.find(s)==0?true:false;
    string rs = s;
    std::reverse(rs.begin(), rs.end());
    string rt = t;
    reverse(rt.begin(), rt.end());
    bool isEnd = rt.find(rs)==0?true:false;
    if(isInit&&isEnd) ans = 0;
    else if(isInit&&!isEnd) ans = 1;
    else if(!isInit&&isEnd) ans = 2;
    else if(!isInit&&!isEnd) ans = 3;
    cout << ans;
    return 0;
}