#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int n, s, t;
    cin >> n >> s >> t;
    int w;
    cin >> w;

    int ans = 0;
    if(s<=w && w<=t){
        ans++;
    }
    for(int i = 1;i<n;i++){
        int a;
        cin >> a;
        w += a;
        if(s<=w && w<=t){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
    
}