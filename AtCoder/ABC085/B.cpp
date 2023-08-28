#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int d[101] = {0};
    int ans = 0;
    for(int i = 0;i<n;i++){
        int di;
        cin >> di;
        if(d[di] == 0){
            d[di] = 1;
            ans++;
        }
    }
    cout << ans;
    
}