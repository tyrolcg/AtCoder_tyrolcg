#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edgeMatrix(n, vector<int>(n,0));
    
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;
        edgeMatrix[u-1][v-1] = 1;
        edgeMatrix[v-1][u-1] = 1;
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(edgeMatrix[i][j]==1 and edgeMatrix[j][k]==1 and edgeMatrix[k][i]==1){
                    ans++;
                }
            }
        }
    }
    cout << ans;
    
    
}