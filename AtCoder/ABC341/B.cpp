#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
    int n;
    vector<ll> a, s, t;
    cin >> n;
    a.resize(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    
    s.resize(n);
    t.resize(n);
    for(int i = 0;i<n-1;i++){
        cin >> s[i];
        cin >> t[i];
    }

    // i番目の通貨をi+1番目の通貨にすべて両替すればよい
    for(int i = 0;i<n-1;i++){
        ll aps = a[i] / s[i];
        a[i+1] += aps * t[i];
    }
    cout << a[n-1] << endl;
    
    return 0;
}