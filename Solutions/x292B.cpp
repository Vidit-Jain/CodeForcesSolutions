#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long
class Graph{
    int V;
    list<int> *adj;
    public:
    Graph(int V){
        this->V=V;
        adj=new list<int>[V];
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool isStar(){
        int ones=0,x=0;
        for(int i=1;i<V;i++){
            if(adj[i].size()==1) ones++;
            if(adj[i].size()==(V-2)) x++;
        }
        if(x==1 && ones==(V-2)){
            return true;
        }
        return false;
    }
    bool isBus(){
        int ones=0,twos=0;
        for(int i=1;i<V;i++){
            if(adj[i].size()==1) ones++;
            if(adj[i].size()==2) twos++;
        }
        if(ones==2 && twos==(V-3)) return true;
        return  false;
    }
    bool isRing(){
        int x=0;
        for(int i=1;i<V;i++){
            if(adj[i].size()==2) x++;
        }
        if(x==(V-1)) return true;
        return false;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    Graph g(n+1);
    while(m--){
        int a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
    if(g.isStar()) cout<<"star topology";
    else if(g.isBus()) cout<<"bus topology";
    else if(g.isRing()) cout<<"ring topology";
    else cout<<"unknown topology";   

}