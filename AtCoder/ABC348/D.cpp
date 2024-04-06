/* memo bfs が使えそう*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

class Player{
public:
    int e;
    int x;
    int y;
    
    Player(int sx, int sy){
        e = 0;
        x = sx;
        y = sy;
    }
};


bool query(Player p,  vector<vector<char>> &grid, vector<vector<int>> &energy, int h, int w, vector<vector<int>> grid_arrived){
    if(grid_arrived[p.x][p.y] != -1) return false;
    grid_arrived[p.x][p.y] = 0;
    cout << p.x << " " << p.y << endl;
    if(grid[p.x][p.y]=='T'){
        cout << "Yes" << endl;
        return true;
    }
    // energy的に移動可能か
    if(energy[p.x][p.y] > 0){
        if(p.y > 0){
            if(grid[p.x][p.y-1] != '#'){
                energy[p.x][p.y - 1] = max(energy[p.x][p.y - 1], energy[p.x][p.y]-1);
                if(query(Player(p.x, p.y-1), grid, energy, h, w, grid_arrived)) return true;
            }
        }
        if(p.y < h-1){
            if(grid[p.x][p.y+1] != '#'){
                energy[p.x][p.y + 1] = max(energy[p.x][p.y + 1], energy[p.x][p.y]-1);
                if(query(Player(p.x, p.y+1), grid, energy, h, w, grid_arrived)) return true;
            }
        }
        if(p.x < w-1){
            if(grid[p.x+1][p.y] != '#'){
                energy[p.x+1][p.y] = max(energy[p.x+1][p.y], energy[p.x][p.y]-1);
                if(query(Player(p.x+1, p.y), grid, energy, h, w, grid_arrived)) return true;
            }
        }
        if(p.x > 0){
            if(grid[p.x - 1][p.y] != '#'){
                energy[p.x - 1][p.y] = max(energy[p.x - 1][p.y], energy[p.x - 1][p.y]-1);
                if(query(Player(p.x-1, p.y), grid, energy, h, w, grid_arrived)) return true;
            }
        }
    }
    else if(grid[p.x][p.y]=='T'){
        cout << "Yes" << endl;
        return true;
    }
    else{
        cout << "No" << endl;
        return false;
    }
}
int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    vector<vector<int>> grid_arrived(h, vector<int>(w, -1));
    Player p(0,0);
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            cin >> grid[i][j];
            if(grid[i][j]=='S'){
                p = Player(i, j);
            }
        }
    }
    int n;
    cin >> n;

    // エネルギーを記録
    vector<vector<int>> energy(h, vector<int>(w, 0));
    vector<vector<int>> portion(h, vector<int>(w));
    
    for(int i = 0;i<n;i++){
        int r, c, e;
        cin >> r >> c >> e;
        r--;
        c--;
        portion[r][c] = e;
        energy[r][c] = e;
    }

    
    
    query(p, grid, energy, h, w, grid_arrived);
    return 0;
    
}