#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n-1;i++){
        cout << a[i] * a[i+1] << " ";
    }
    //cout << a[n-1] * a[n];
    
    
    return 0;
}