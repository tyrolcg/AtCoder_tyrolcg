#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define ll long long

using namespace std;


int main(){
    int n;
    cin >> n;
    
    vector<int> x, y, z;
    int takahashi = 0;
    int aoki = 0;
    for(int i = 0;i < n;i++){
        int xi, yi , zi;
        cin >> xi >> yi >> zi;
        x.push_back(xi);
        y.push_back(yi);
        z.push_back(zi);
        
        if(xi > yi){
            takahashi += zi;
        }
        else{
            aoki += zi;
        }
    }
    int ans = 0;

    if(aoki > takahashi){
        
    }
    
    
    cout<< ans <<endl;
    
}