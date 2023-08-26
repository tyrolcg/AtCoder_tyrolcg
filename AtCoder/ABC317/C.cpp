#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
vector<vector<int>> e(11);
vector<int> used(11);
int ans;

void dfs(int v, int sum){
    used[v] = 1;
    ans = max(ans, sum);
    for(int i=1;i<=n;i++){
        if(!used[i]&&e[v][i]){
            dfs(i,sum+e[v][i]);
        }
    }
    used[v]=0;
}

int main(){
    cin >> n >> m;
    for(int i = 0;i<m;i++){
        int a, b, c;
        cin >> a >> b>> c;
        e[a][b]=e[b][a]=c;
    }
    for(int i = 1;i<=n;i++){
        dfs(i, 0);
    }
    cout << ans << endl;
}