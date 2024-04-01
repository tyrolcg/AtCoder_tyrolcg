/*
文字の抜き取り方は2^N通りであり、この全探索はDPで解けることが多い。 
*/

#include<iostream>
#include<vector>

using namespace std;
const int MOD = 1000000007;
const string T = "atcoder";

// aにbを足してMODをとる
void add(int &a, int &b){
    a+=b;
    if(a>=MOD) a-=MOD;
}

int main(){
    int n;
    string s;
    cin >> n >> s;

    // dp table
    vector<vector<int>> dp(n+1, vector<int>(T.size()+1, 0));

    // initialize
    dp[0][0] = 1;
    
    for(int s_i = 0; s_i<n; s_i++){
        for(int t_i = 0; t_i<=T.size();t_i++){
            // s[i]を選ばない
            add(dp[s_i+1][t_i], dp[s_i][t_i]);

            // s[i]を選ぶ
            if(t_i<T.size() && s[s_i]==T[t_i]){
                add(dp[s_i+1][t_i+1], dp[s_i][t_i]);
            }
        }
    }
    cout << dp[n][T.size()] << endl;
}