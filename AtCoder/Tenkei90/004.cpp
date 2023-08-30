#include<iostream>
#include<vector>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    vector<int> row(h, 0), column(w, 0);
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            row[i] += a[i][j];
        }
    }
    for(int i = 0;i<w;i++){
        for(int j = 0;j<h;j++){
            column[i] += a[j][i];
        }
    }
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            cout << row[i] + column[j] - a[i][j] << " ";
        }
        cout << endl;
    }
}