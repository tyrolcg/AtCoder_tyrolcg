#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> s(8);
    bool flag = true;
    for(int i = 0;i<8;i++){
        cin >> s[i];
        if(i>0 && s[i-1] > s[i]){
            flag = false;
            break;
        }
        if(s[i]<100||675<s[i]){
            flag = false;
            break;
        }
        if(s[i]%25!=0){
            flag = false;
            break;
        }
        
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
}