#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n;
vector<vector<int>> G(1<<18);
vector<int> dist(1<<18, -1);

// 幅優先探索で最短距離を取得
void getDist(int from){
    
    for(int i = 1;i <= n;i++) dist[i] = -1;
    queue<int> Q;
    dist[from] = 0;
    Q.push(from);
    while(!Q.empty()){
        int pos = Q.front();
        Q.pop();
        for(int to : G[pos]){
            if(dist[to] == -1){
                Q.push(to);
                dist[to] = dist[pos] + 1;
            }
        }
    }
    
}
int main(){
    cin >> n;
    for(int i = 1; i < n;i++){
        int ai, bi;
        cin >> ai >> bi;
        G[ai].push_back(bi);
        G[bi].push_back(ai);
    }
    
    // 頂点1から最も遠い頂点を取得
    getDist(1);
    int max1 = -1;
    int max1dist = -1;
    for(int i = 1;i<=n;i++){
        
        if(max1dist < dist[i]){
            max1dist = dist[i];
            max1 = i;
        }
    }
    // "1から最も遠い頂点"から最も遠い頂点までの距離を取得
    getDist(max1);
    int maxMdist = -1;
    for(int i = 1;i<=n;i++){
        maxMdist = max(maxMdist, dist[i]);
    }
    cout << maxMdist + 1 << endl;
    return 0;
}