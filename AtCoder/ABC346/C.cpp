#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 1; i<=n;i++){
        int input = 0;
        cin >> input;
        a[i] = input;
    }
    ll sum = 0;
    for(ll i = 1; i<=k;i++){
        if(find(a.begin(), a.end(), i) != a.end()){
            
        }
        else{
            sum+=i;
        }
    }
    cout << sum << endl;
    

    
    
    return 0;
}