#include<iostream>

using namespace std;

int main(){
    int n, y;
    cin >> n >> y;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=n - i;j++){
            int k = n - i -j;
            if(k<0){
                cout << "-1 -1 -1";
                return 0;
            }
            int fee = 10000*i + 5000*j + 1000*k;
            if(fee == y){
                cout << i<< " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1";
    return 0;
}