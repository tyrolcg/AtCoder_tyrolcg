#include<iostream>
#include<vector>
#define ll long long

using namespace std;

typedef struct node{
    int childNumMax = 0;
    vector<node*> next;
}node_t;

int nodeLength(node* n){
    if(n->next.empty()){
        n->childNumMax = 0;
        return 1;
    }
    else{
        int cnt = 1;
        for (node* i : n->next){
            cnt+=nodeLength(i);
        }
        //cout<<cnt<<endl;
        return cnt;
    }
}


int main(){
    int n,m;
    int ans = -1;
    cin >> n >> m;
    vector<node_t> nodes(n+1);
    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        nodes[a].next.push_back(&nodes[b]);

    }
    for(int i = 1;i<=n;i++){
        //cout<<nodeLength(&nodes[i])<<endl;
        if(ans==-1 && nodeLength(&nodes[i])==n){
            ans = i;
            break;
        }

    }



    cout<<ans<<endl;
    return 0;
}
