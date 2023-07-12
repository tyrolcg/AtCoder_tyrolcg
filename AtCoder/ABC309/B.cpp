#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0; j<n; j++){
            if(s[j]=='0') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    
    vector<vector<int>> b(n, vector<int>(n));
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            if(i==0||j==0||i==n-1||j==n-1){
                if(i==0&&j<n-1) b[i][j+1] = a[i][j];
                if(i<n-1&&j==n-1) b[i+1][j] = a[i][j];
                if(i == n-1&&j>0) b[i][j-1] = a[i][j];
                if(i > 0&&j==0) b[i-1][j] = a[i][j];
            }
            else{
                b[i][j] = a[i][j];
            }
        }
        
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++) cout << b[i][j];
        cout << endl;
    }
}