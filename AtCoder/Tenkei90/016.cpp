#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

/* 愚直に計算するとO(N^3) */
/* 計算を工夫してO(N^2) */
int main()
{
    ll a, b, c, n;
    ll MaxCoins = 9999;
    cin >> n >> a >> b >> c;

    ll sum = 100000;
    for (ll x = 0; x < MaxCoins; x++){
        for (ll y = 0; y < MaxCoins; y++)
        {
            ll value = x * a + y * b;
            if(n<value || (n-value)%c!=0)continue;
            ll z = (n - value) / c;
            sum = min(sum, x + y + z);
        }
    }
    cout << sum << endl;
}
