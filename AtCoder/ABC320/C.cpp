#include<iostream>
#include<cmath>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#define ll long long int
int m;
vector<int> getIndex(string s, int target){
    vector<int> ary;
    for(int i = 0;i<s.length();i++){
        if(s[i]-'0'==target){
            ary.push_back(i);
        }
    }
    return ary;
}

int getTotalTime(vector<int>f, vector<int>s, vector<int>t){
    int time = f[0];
    int cnt = 1;
    for(int i = 0;i<s.size();i++){
        if(s[i] > time){
            time = s[i];
            break;
        }
        if(i == s.size()-1){
            time = s[0] + m;
            cnt++;
        }
    }
    for(int i = 0;i<t.size();i++){
        if(t[i] > time){
            time = t[i];
            break;
        }
        if(i == t.size()-1){
            time = t[0] + (m * cnt);
        }
    }
    return time;
}

int main(){
    
    string s1, s2,s3;
    cin >> m >> s1>>s2>>s3;

    int ans = 100000000;
    
    // 0から9までの値を最速で揃える時間をそれぞれ計測する
    // 1,2,3をどの順にそろえるか全探索
    int cnt = 0;
    for(int i = 0;i<10;i++){
        vector<int>s1Idx = getIndex(s1,i);
        vector<int>s2Idx = getIndex(s2,i);
        vector<int>s3Idx = getIndex(s3,i);
        if(s1Idx.empty()||s2Idx.empty()||s3Idx.empty()){
            continue;
        }
        cnt++;
        vector<int> time(6);
        time[0] = getTotalTime(s1Idx,s2Idx,s3Idx);
        time[1] = getTotalTime(s1Idx, s3Idx, s2Idx);
        time[2] = getTotalTime(s2Idx,s1Idx,s3Idx);
        time[3] = getTotalTime(s2Idx,s3Idx,s1Idx);
        time[4] = getTotalTime(s3Idx,s1Idx,s2Idx);
        time[5] = getTotalTime(s3Idx,s2Idx,s1Idx);
        for(auto t : time){
            ans = min(t,ans);
        }
    }
    if(cnt==0) ans = -1;
    cout << ans;
    return 0;
}