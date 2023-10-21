#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
int h, w;
struct pos{
    int x;
    int y;
};


bool isSens(pos p, vector<string> s, vector<vector<bool>> explored){
    if(p.x>=0 && p.x<h){
        if(p.y>=0 && p.y < w){
            if(s[p.x][p.y]=='#' && !explored[p.x][p.y]) return true;
        }
    }
    return false;
}

int main(){
    
    cin >> h >> w;

    vector<string> s(h);
    
    
    for(int i = 0;i<h;i++){
        cin >> s[i];
    }
    vector<vector<bool>> explored(10000,vector<bool>(10000, false));
    int ans = 0;
    for(int i =0;i<h;i++){
        for(int j = 0;j<w;j++){
            pos p={i,j};
            queue<pos> q;
            q.push(p);
            if(!explored[i][j]){
                p = {i, j};
                explored[i][j] = true;
                if(s[i][j]=='#')ans++;
                while(!q.empty()){
                    p = q.front();
                    q.pop();
                    if(s[p.x][p.y]=='#'){
                        if(isSens({p.x+1, p.y}, s ,explored)){
                            q.push({p.x+1, p.y});
                            explored[p.x+1][p.y]=true;
                        }
                        if(isSens({p.x+1, p.y+1}, s ,explored)){
                            q.push({p.x+1, p.y+1});
                            explored[p.x+1][p.y+1]=true;
                        }
                        if(isSens({p.x+0, p.y+1}, s ,explored)){
                            q.push({p.x, p.y+1});
                            explored[p.x][p.y+1]=true;
                        }
                        if(isSens({p.x-1, p.y+1}, s ,explored)){
                            q.push({p.x-1, p.y+1});
                            explored[p.x-1][p.y+1]=true;
                        }
                        if(isSens({p.x-1, p.y}, s ,explored)){
                            q.push({p.x-1, p.y});
                            explored[p.x-1][p.y+1]=true;
                        }
                        if(isSens({p.x-1, p.y-1}, s ,explored)){
                            q.push({p.x-1, p.y-1});
                            explored[p.x-1][p.y-1]=true;
                        }
                        if(isSens({p.x, p.y-1}, s ,explored)){
                            q.push({p.x, p.y-1});
                            explored[p.x][p.y-1]=true;
                        }
                        if(isSens({p.x+1, p.y-1}, s ,explored)){
                            q.push({p.x+1, p.y-1});
                            explored[p.x+1][p.y-1]=true;
                        }
                    }
                }
                
            }
            
        }
    }
    cout << ans;
    
    return 0;
}