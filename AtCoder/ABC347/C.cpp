#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    const int weekdays = a + b;
    int di, maxd = 0, mind = weekdays;
    for(int i = 0;i<n;i++){
        cin >> di;
        int mod = di % weekdays;

        mind = min(mod, mind);
        maxd = max(mod, maxd);
    }
    
    if(maxd - mind < a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}
