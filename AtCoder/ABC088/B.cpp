#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ary;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        ary.push_back(a);
    }
    sort(ary.begin(), ary.end());
    reverse(ary.begin(), ary.end());
    int res = 0;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            res += ary[i];
        }
        else{
            res -= ary[i];
        }
    }
    cout << res;
    return 0;
}