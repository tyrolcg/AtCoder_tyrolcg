#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    vector<int> win;

    cin >> n;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        win.push_back(count(s.begin(), s.end(), 'o'));
    }
    //最大でn-1勝
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<n;j++){
            if(win[j]==i){
                cout << j+1 << " ";
            }
        }
    }
    
    return 0;
}