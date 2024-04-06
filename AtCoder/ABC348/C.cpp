#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> beans;
    for(int i = 0;i<n;i++){
        int a, c;
        cin >> a >> c;
        beans.push_back(make_pair(a, c));
    }

    // sort by colour
    sort(beans.begin(), beans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int minmax = 0;
    int nowcolor = beans[0].second;
    int nowcolor_min = beans[0].first;
    for(int i = 0;i<n;i++){
        //cout << beans[i].first << ":" << beans[i].second << endl;
        if(beans[i].second != nowcolor){
            nowcolor = beans[i].second;
            minmax = max(nowcolor_min, minmax);
            nowcolor_min = beans[i].first;
            //cout << minmax << endl;
        }

        nowcolor_min = min(nowcolor_min, beans[i].first);
        
        
    }
    minmax = max(nowcolor_min, minmax);
    cout << minmax << endl;
    
    return 0;
    
}