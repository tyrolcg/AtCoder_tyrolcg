#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        if(a%k==0) cout << a / k << " ";
    }
    
    
    return 0;
}