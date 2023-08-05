#include<iostream>
#include<vector>
using namespace std;

#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 0;i<n;i++){
        cin >> a[i+1];
    }
    ll ans = 0;
    ll cnt = 0;
    for(int i = 1;i<n+1;i++){
        int j = a[i];
        if(i < j and a[j]==i){
            ans++;
        }
    }
    for(int i = 1; i<n+1;i++){
        if(i == a[i]){
            cnt++;
        }
    }
    ans += (cnt*(cnt-1)/2);   
    
    cout<<ans<<endl;
    return 0;
}