#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#define ll long long

using namespace std;


int main(){
    int h,w;
    cin >> h >> w;
    string abc = "abcdefghijklmnopqrstuvwxy";
    int sum = 0;
    vector<string> c(h, "");
    
    for(int i=0;i < h;i++){
        cin >> c[i];
    }
    int ans = h*w;

    // h
    for(int i = 0;i<h;i++){
        vector<char> existColor;
        vector<int>same(30, 0);
        for(int j = 0;j<w;j++){
            if(std::count(existColor.begin(), existColor.end(), c[i][j])){
                ans--;
                string cs{c[i][j]};
                cout<<abc.find(cs);
                same[abc.find(cs)]=1;
            }
            else{
                existColor.push_back(c[i][j]);
            }
        }
        for(int j = 0;j<26;j++){
            if(same[j]) ans++;
        }
    }
    // w
    for(int i = 0;i<w;i++){
        vector<char> existColor;
        vector<int>same(26, 0);
        for(int j = 0;j<h;j++){
            if(std::count(existColor.begin(), existColor.end(), c[j][i])){
                ans--;
                string cs{c[i][j]};
                cout<<abc.find(cs);
                same[abc.find(cs)]=1;
            }
            else{
                existColor.push_back(c[j][i]);
            }
            
        }
        for(int j = 0;j<26;j++){
            if(same[j]) ans++;
        }
    }
    
    cout<< ans <<endl;
    
}