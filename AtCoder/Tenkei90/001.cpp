#include<iostream>
#include<vector>

using namespace std;
int n, k, l;
vector<int> a;

//条件を満たすか
bool solve(int m){
    int cnt = 0, pre = 0;
    for(int i = 0;i<n;i++){
        if(a[i] - pre >= m && l-a[i] >=m){
            cnt++;
            pre = a[i];
        }
    }
    if(cnt>=k) return true;
    return false;
}

int main(){
    cin >> n >> l;
    cin >> k;
    // 最小値の最大化->二分探索
    for(int i = 0;i<n;i++){
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    int left = -1;
    int right = l+1;
    while(right - left > 1){
        int mid = left + (right - left)/2;
        //cout << left << "," << right << endl;
        if(solve(mid)==false){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << left << endl;
    exit(0);
    
}