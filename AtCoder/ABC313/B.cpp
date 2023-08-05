#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main(){
    int n,m;
    int ans = -1;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a>> b;
        a--; b--;
        arr[b]++;
    }
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            if(ans != -1){
                cout<<-1<<endl;
                return 0;
            }
            ans = i+1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
