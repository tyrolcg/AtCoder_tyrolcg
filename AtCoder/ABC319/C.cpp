#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>

using namespace std;
#define ll double
vector<int>gotCidx(9,0);
vector<int> c(9);
void idxReset(){
    for(int i = 0;i<9;i++){
        gotCidx[i] = 0;
    }
}
bool isGakkari(int idx){
    if(idx==0){
        if((gotCidx[1]==1 && gotCidx[2]==1) && (c[1]==c[2])) return true;
        if((gotCidx[3]==1 && gotCidx[6]==1) && (c[3]==c[6])) return true;
        if((gotCidx[4]==1 && gotCidx[8]==1) && (c[4]==c[8])) return true;
    }
    if(idx==1){
        if((gotCidx[0]==1 && gotCidx[2]==1) && (c[0]==c[2])) return true;
        if((gotCidx[4]==1 && gotCidx[7]==1) && (c[4]==c[7])) return true;
    }
    if(idx==2){
        if((gotCidx[0]==1 && gotCidx[1]==1) && (c[1]==c[0])) return true;
        if((gotCidx[5]==1 && gotCidx[8]==1) && (c[5]==c[8])) return true;
        if((gotCidx[4]==1 && gotCidx[6]==1) && (c[4]==c[6])) return true;
    }
    if(idx==3){
        if((gotCidx[0]==1 && gotCidx[6]==1) && (c[0]==c[6])) return true;
        if((gotCidx[4]==1 && gotCidx[5]==1) && (c[4]==c[5])) return true;
    }
    if(idx==4){
        if((gotCidx[3]==1 && gotCidx[5]==1) && (c[3]==c[5])) return true;
        if((gotCidx[1]==1 && gotCidx[7]==1) && (c[1]==c[7])) return true;
        if((gotCidx[0]==1 && gotCidx[8]==1) && (c[0]==c[8])) return true;
        if((gotCidx[2]==1 && gotCidx[6]==1) && (c[2]==c[6])) return true;
    }                                             
    if(idx==5){                                   
        if((gotCidx[2]==1 && gotCidx[8]==1) && (c[2]==c[8])) return true;
        if((gotCidx[3]==1 && gotCidx[4]==1) && (c[3]==c[4])) return true;
    }                                            
    if(idx==6){                                   
        if((gotCidx[0]==1 && gotCidx[3]==1) && (c[3]==c[0])) return true;
        if((gotCidx[7]==1 && gotCidx[8]==1) && (c[7]==c[8])) return true;
        if((gotCidx[2]==1 && gotCidx[4]==1) && (c[4]==c[2])) return true;
    }                                             
    if(idx==7){                                   
        if((gotCidx[4]==1 && gotCidx[1]==1) && (c[1]==c[4])) return true;
        if((gotCidx[6]==1 && gotCidx[8]==1) && (c[6]==c[8])) return true;
    }
    if(idx==8){
        if((gotCidx[0]==1 && gotCidx[4]==1) && c[4]==c[0]) return true;
        if((gotCidx[2]==1 && gotCidx[5]==1) && c[5]==c[2]) return true;
        if((gotCidx[7]==1 && gotCidx[6]==1) && c[7]==c[6]) return true;
    }
    return false;
}
int main(){
    for(int j = 0;j<9;j++){
        cin >> c[j];
    }
    ll gakkari = 0;
    ll total = 0;
    vector<int> one_case;
    for(int i = 0;i<9;i++){
        one_case.push_back(i);
    }
    do{
        total++;
        idxReset();
        for(auto num : one_case){
            gotCidx[num] = 1;
            if(isGakkari(num)){
                gakkari++;
                break;
            }
        }
        
    }while (next_permutation(one_case.begin(), one_case.end()));

    ll ans = gakkari / total;
    ans = 1.0 - ans;
    cout << setprecision(10) << ans;
    
    
    return 0;
}