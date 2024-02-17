#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    vector<int> ary;
    cin >> n;
    
    
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        ary.push_back(a);
    }

    int m = max(ary[0], ary[1]);
    int preMax = ary[0]==ary[1]?0:min(ary[0], ary[1]);
    for(int i = 2;i<n;i++){
        if(m==ary[i]) continue;
        if(m < ary[i]){
            preMax = m;
            m = ary[i];
        }
        else if(preMax < ary[i]){
            preMax = ary[i];
        }
    }
    cout << preMax;
    
    return 0;
}