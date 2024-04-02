#include<iostream>
#include<vector>

using namespace std;

/* O(NQ) */
int main(){
    int n;
    cin >> n;
    // 累積和
    vector<vector<int>> p(3, vector<int>(n+1, 0));

    
    for(int i = 1;i<=n;i++){
        int ci, pi;
        cin >> ci >> pi;
        p[1][i] = p[1][i-1];
        p[2][i] = p[2][i-1];
        p[ci][i] += pi;
        
    }
    int q;
    cin >> q;
    for(int i = 0;i<q;i++){
        int l, r;
        cin >> l >> r;
        
        cout << p[1][r] - p[1][l-1];
        cout << " ";
        cout << p[2][r] - p[2][l-1];
        cout << endl;
    }
    
}