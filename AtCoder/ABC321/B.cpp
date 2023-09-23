#include <algorithm>
#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int n,x;
    cin >> n >>x;
    vector<int> a(n-1);
    for(int i = 0;i<n-1;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for(int i = 0;i<n-1;i++){
        sum += a[i];
    }
    int sumNo0 = sum - a[0];
    int ans = 0;
    // 余剰
    if(sumNo0>x){
        sumNo0 -= a[n-2];
        ans = x - sumNo0;
        if(ans > a[n-2]) ans = -1;
        // 追加した値でa[0]が追加されるか
        if(ans < a[0]){
            if(x==sumNo0+a[0]){
                
                ans = 0;
            }
            else{
                ans = -1;
            }
        }
    }
    // 変更無し
    else if(sumNo0==x){
        // a[0] or a[n-2]

        if(a[0]==0) ans = 0;
        else ans = a[n-2];
    }
    // 足りない
    else{
        ans = -1;
    }
    if(ans>100 || ans < 0){
        ans = -1;
    }
    cout << ans;
    return 0;
}