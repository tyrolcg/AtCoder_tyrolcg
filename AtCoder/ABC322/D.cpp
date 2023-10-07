#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int>a;
    vector<int> d(n+1, 0);
    for(int i = 0;i<m;i++){
        int ai;
        cin >> ai;
        d[ai] = 1;
        a.push_back(ai);
    }
    //
    int nextIdx = 0;
    for(int i = 1;i<=n;i++){
        int ans;
        if(a[nextIdx]==i){
            nextIdx++;
            ans = 0;
        }
        else{
            ans = a[nextIdx] - i;
        }
        cout << ans << endl;
    }
    return 0;
}