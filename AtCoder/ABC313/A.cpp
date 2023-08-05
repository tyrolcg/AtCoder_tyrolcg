#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    int ans = 0;
    int p1;
    cin>>p1;
    int max = p1;
    for(int i=1;i<n;i++){
        cin >> p[i];
        if(max<=p[i]){
            max = p[i];
            ans = p[i] - p1+1;
        }
    }
    cout<<ans<<endl;
    
}