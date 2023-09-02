#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> field(101, vector<int>(101, 0));

    for(int i = 0;i<n;i++){
        int a, b, c, d;
        cin >> a>>b>>c>>d;
        for(int x = a; x < b; x++){
            for(int y = c; y < d; y++){
                field[x][y] = 1;
            }
        }
    }
    int s = 0;
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101;j++){
            if(field[i][j]==1){
                s++;
            }
        }
    }
    cout << s << endl;
    return 0;
}