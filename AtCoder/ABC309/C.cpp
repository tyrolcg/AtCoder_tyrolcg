#include<iostream>
#include<vector>

typedef long long ll;

using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll>a(n, 0);
    vector<ll> b(n, 0);
    for (ll i = 0; i < n;i++){
        cin >> a[i] >> b[i];
    }

    for (ll i = 0; i < n;i++){
        ll count = 0;
        for (ll j = 0; j < n;j++){
            if (a[j] >= i + 1)
            {
                count += b[j];
            }
        }
        if(count <= k){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
