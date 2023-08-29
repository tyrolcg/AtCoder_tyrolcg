#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> t(n+1,0), x(n+1,0), y(n+1,0);
    for(int i = 1;i<n+1;i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    string ans = "Yes";
    for(int i = 0; i< n;i++){
        int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        int d = t[i+1]-t[i];
        if(dist>d){
            ans = "No";
            break;
        }
        if(dist%2!=d%2){
            ans = "No";
            break;
        }
    }
    cout << ans;
    exit(0);
}