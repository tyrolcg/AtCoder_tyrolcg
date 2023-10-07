#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define ll long long 
using namespace std;
int main(){
    int n, m;
    
    cin >> n >> m;
    vector<ll> score(m+3);
    for(int i = 1;i<=m;i++){
        cin >> score[i];
    }

    vector<ll> highScoreIndex;
    for(int i = 2500; i>=500; i=i-100){
        for(int j = 1; j<=m;j++){
            if(score[j]==i){
                highScoreIndex.push_back(j);
            }
        }
    }
    
    vector<ll> scoreIndivisual;
    vector<string> s(n);
    ll scoreMax = 0;
    // n*m
    // 各人のスコアと最大スコアを計算
    for(int i = 0;i<n;i++){
        cin >> s[i];
        ll c = 0;
        for(int j = 1;j<=m;j++){
            if(s[i][j-1]=='o') c+=score[j];
        }
        c+=i+1;
        scoreIndivisual.push_back(c);
        scoreMax = max(scoreMax, c);
    }

    
    // 最大スコアとの差から必要回答数を計算
    for(int i = 0;i<n;i++){
        ll diff = scoreMax - scoreIndivisual[i];
    
        int count = 0;
        for(int j = 0;j<m;j++){
            if(diff<=0) break;
            if(s[i][highScoreIndex[j]-1]=='x'){
                diff -= score[highScoreIndex[j]];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}