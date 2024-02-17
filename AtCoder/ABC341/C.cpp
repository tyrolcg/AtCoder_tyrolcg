#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
    int h, w, n;
    string t;
    vector<string> s;

    cin >> h >> w >> n;
    cin >> t;
    
    s.resize(h);
    for(int i = 0;i<h; i++){
        cin >> s[i];
    }
    // i番目の移動における縦横の移動量
    vector<int> moveH(n,0);
    vector<int> moveW(n,0);
    for(int i = 0;i<n;i++){
        if(t[i]=='L') moveW[i] = -1;
        if(t[i]=='R') moveW[i] = 1;
        if(t[i]=='D') moveH[i] = 1;
        if(t[i]=='U') moveH[i] = -1;
    }
    // スタート地点から全探索しても 500x500x500->O(10^8)のオーダー
    int count = 0;
    for(int hi = 0; hi<h; hi++){
        for(int wi = 0;wi<w;wi++){
            int currentH = hi;
            int currentW = wi;
            // 初期値が海であればスキップ
            if(s[currentH][currentW] == '#') continue;
            int moveTime = 0;
            for(int ni = 0; ni < n; ni++){
                // 移動先がNULL?
                const int nextH = currentH + moveH[ni];
                const int nextW = currentW + moveW[ni];
                if(nextH < 0 || h < nextH) break;
                if(nextW < 0 || w < nextW) break;
                // 現在地の更新
                currentH = nextH;
                currentW = nextW;
                // 現在地が海?
                if(s[currentH][currentW] == '#') break;
                
                moveTime++;
            }
            if(moveTime == n){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}