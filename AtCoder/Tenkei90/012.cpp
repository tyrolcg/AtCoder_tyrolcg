/* Union-Find treeを使ってブロックをグループ化 */

#include<iostream>
#include<vector>

using namespace std;
// Union Find tree
class UnionFind{
private:
    vector<int> par;
public:
    UnionFind(int n) : par(n){
        for(int i = 0;i<n;i++) par[i] = i;
    }

    // データxが属する木の根を再帰で取得
    int root(int x){
        if(par[x] == x) return x;
        int p = par[x];
        return p = root(p);
    }

    // xの木の根をyの根に併合(ランク無し)
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }
};

struct block{
    int r = 0;
    int c = 0;
};

int main(){
    int h, w, q;
    cin >> h >> w >> q;
    vector<vector<int>> grid(h+1,vector<int>(w+1,0));
    UnionFind tree(h * w+2);
    for(int i = 0;i<q;i++){
        int query_info;
        cin >> query_info;
        if(query_info==1){
            block b;
            cin >> b.r >> b.c;
            b.r--;
            b.c--;
            grid[b.r][b.c] = 1;
            
            // treeに結合
            // top
            if(b.r - 1 >= 0){
                if(grid[b.r - 1][b.c]==1){
                    tree.unite(b.r * w + b.c, (b.r-1) * w + b.c);
                }
                
            }
            // bottom
            if(b.r + 1 < h){
                if(grid[b.r + 1][b.c]==1){
                    tree.unite(b.r * w + b.c, (b.r+1) * w + b.c);
                }
            }
            // left
            if(b.c - 1 >= 0){
                if(grid[b.r][b.c - 1]==1){
                    tree.unite(b.r * w + b.c, b.r * w + b.c - 1);
                }
                
            }
            // right
            if(b.c + 1 < w){
                if(grid[b.r][b.c + 1]==1){
                    tree.unite(b.r * w + b.c, b.r * w + b.c + 1);
                }
                
            }
        }
        else{
            block b1, b2;
            cin >> b1.r >> b1.c >> b2.r >> b2.c;
            b1.r--;
            b1.c--;
            b2.r--;
            b2.c--;
            const int start = b1.r * w + b1.c;
            const int goal = b2.r * w + b2.c;
            if(grid[b1.r][b1.c]==0 || grid[b2.r][b2.c]==0){
                cout << "No" << endl;
                continue;
            }
            if(tree.same(start, goal)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    
    
}

