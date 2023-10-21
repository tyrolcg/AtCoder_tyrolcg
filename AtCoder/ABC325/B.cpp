#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>w(n);
    vector<int>x(n);

    for(int i = 0;i<n;i++){
        cin >> w[i];
        cin >> x[i];
    }
    int m = 0;
    vector<int> emp_count(24,0);
    for(int i = 0;i<24;i++){
        for(int j = 0;j<n;j++){
            if((x[j] + i)%24>=9){
                if((x[j] + i)%24<=17){
                    emp_count[i] += w[j];
                }
            }
        }
        m = max(m, emp_count[i]);
    }

    cout<<m;
    
    return 0;
}