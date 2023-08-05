#include<iostream>
#include <string>

using namespace std;

int worldCupYear(int y){
    if(y%4==2){
        return y;
    }
    else{
        return worldCupYear(y+1);
    }
}
int main(){
    int y;
    cin >> y;
    cout << to_string(worldCupYear(y)) << endl;
    return 0;
}