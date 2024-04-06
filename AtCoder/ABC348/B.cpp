#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

struct block{
    int x = 0;
    int y = 0;

    double length(block b1, block b2){
        return sqrt((b1.x - b2.x) * (b1.x - b2.x) + (b1.y - b2.y) * (b1.y - b2.y));
    }
};


int main(){
    int n;
    cin >> n;
    vector<block> b(n);

    for(int i = 0;i<n;i++){
        cin >> b[i].x >> b[i].y;
    }
    
    
    for(int i = 0;i<n;i++){
        double maxlen = 0;
        int maxblock = 0;
        for(int j = 0;j<n;j++){
            if(b[i].length(b[i], b[j]) > maxlen){
                maxlen = b[i].length(b[i], b[j]);
                maxblock = j;
            }
        }
        cout << maxblock+1 << endl;
    }
    return 0;
    
}