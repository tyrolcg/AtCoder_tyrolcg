#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

ll evenCounter(int x, ll y){
    bool isEven = x % 2==0?true:false;
    if(isEven){
        return evenCounter(x / 2, y+1);
    }
    return y;
}

int main(){
    int n;
    cin >> n;
    ll ans = 1000000000000000000;
    for(int i=0;i<n;i++){
        int ai;
        cin >> ai;
        ans = min(ans, evenCounter(ai, 0));

    }
    cout << ans;
    return 0;
}