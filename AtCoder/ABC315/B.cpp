#include<iostream>
#include<vector>
#include<string>
#define ll long long

using namespace std;


int main(){
    int m;
    cin >> m;

    int sum = 0;
    vector<int> d(m,0);
    vector<int> dsum(m,0);
    for(int i=0;i < m;i++){
        cin >> d[i];
        sum += d[i];
        if(i>0){
            dsum[i] = dsum[i-1] + d[i];
        }
        else{
            dsum[i] = d[i];
        }
    }
    sum /= 2;
    int a, b = 0;
    for(int i = 0;i < m;i++){
        if(dsum[i] > sum){
            a = i + 1;
            b = d[i] - (dsum[i] - sum) + 1;
            break;
        }
    }
    cout<<a << " " << b <<endl;
    
}