#include<iostream>
#include<vector>
#include<algorithm>

int INF = 1000000000;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i = 0;i<n;i++){
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    int q;
    sort(a.begin(), a.end());
    cin >> q;
    for(int i = 0;i<q;i++){
        int bi;
        cin >> bi;

        // 二分探索
        int j = lower_bound(a.begin(), a.end(), bi) - a.begin();
        int ans = INF; // long long にすればよかった
        if(j < n) ans = min(ans, abs(a[j] - bi));
        if(j > 0) ans = min(ans, abs(a[j-1] - bi));
        cout << ans << endl;
        
    }
    return 0;
    

    
    
}