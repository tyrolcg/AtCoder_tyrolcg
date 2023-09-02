#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n, d, p;
    cin >> n >> d >> p;
    vector<long long> f(n+3, 0);
    long long cost = 0;
    for(int i = 0;i<n;i++){
        cin >> f[i];
        cost += f[i];
    }
    sort(f.begin(), f.end());
    reverse(f.begin(), f.end());
    for(int i = 0;i < n;){
        long long changeCost = 0;
        for(int j = 0;j<d;j++){
            if(i>=n) break;
            changeCost+=f[i];
            i++;
        }
        if(changeCost > p){
            cost -= changeCost;
            cost += p;
        }
    }
    cout << cost << endl;
    return 0;
}
