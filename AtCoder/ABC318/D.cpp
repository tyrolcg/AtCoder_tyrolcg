#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> d(n+1, vector<int>(n+1, -1));

    for(int i = 1;i<=n;i++){
        for(int j = i+1; j<=n;j++){
            int din;
            cin >> din;
            d[i][j] = din;
            d[j][i] = din;
        }
    }
    
    return 0;
}
