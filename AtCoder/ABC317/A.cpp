#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define ll long long

using namespace std;


int main(){
    int n, h, x;
    cin >> n >> h >> x;
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        int p;
        cin >> p;
        if(x-h <= p){
            ans = i+1;
            break;
        }
    }
    
    cout<< ans <<endl;
    
}