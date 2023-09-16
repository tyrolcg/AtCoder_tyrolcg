#include<iostream>
#include<cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
#define ll long long int


int main(){
    
    int n, m;
    cin >> n>> m;
    vector<int> a(m), b(m), x(m), y(m);
    vector<vector<int>> relativeX(n, vector<int>(n));
    vector<vector<int>> relativeY(n, vector<int>(n));

    for(int i = 0;i<m;i++){
        cin >> a[i] >> b[i] >> x[i] >> y[i];
        relativeX[a[i]][b[i]] = x[i];
        relativeX[b[i]][a[i]] = x[i];
        relativeY[a[i]][b[i]] = y[i];
        relativeY[b[i]][a[i]] = y[i];
    }
    vector<tuple<int,int>> pos(n+1,tuple<int, int>(n,n));
    pos[1] = {0, 0};
    
    
    
    return 0;
}