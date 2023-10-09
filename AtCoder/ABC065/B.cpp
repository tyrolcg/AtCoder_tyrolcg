#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int next = 1;
    int ans = 0;
    for(int i =0;i<n;i++){
        if(next==2){
            cout << ans;
            return 0;
        }
        next = a[next-1];
        ans++;
    }
    cout << -1;
    return 0;
}
