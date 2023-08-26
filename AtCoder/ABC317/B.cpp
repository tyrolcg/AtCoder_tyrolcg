#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define ll long long

using namespace std;


int main(){
    int n;
    cin >> n;
    
    vector<int> a;
    for(int i = 0;i < n;i++){
        int num = 0;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());

    int ans = 0;
    int fst = a[0];
    for(int i = 0; i <= n; i++){
        if(fst + i != a[i]){
            ans = fst + i;
            break;
        }
    }
    
    cout<< ans <<endl;
    
}