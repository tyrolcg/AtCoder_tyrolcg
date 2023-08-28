#include<iostream>

using namespace std;

int digitSum(int x){
    int res = 0;
    while(x>0){
        res += x%10;
        x/=10;
    }
    return res;
}

int main(){
    int n, a, b;
    int count, ans = 0;
    cin >> n >> a >> b;
    for(int i = 1;i<=n;i++){
        int dsum = digitSum(i);
        if(a<=dsum && dsum<=b){
            ans += i;
        }
    }
    cout << ans;
    return 0;
}