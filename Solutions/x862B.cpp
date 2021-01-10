#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define MOD 1000000007
#define ll long long

class Graph{
    int V;
    list<int> *adj;
    int *colors;
    public:
    Graph(int V){
        this->V=V;
        adj=new list<int>[V];
        colors=new int[V];
        for(int i=0;i<V;i++){
            colors[i]=-1;
        }
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll bipartite(){
        int zeros=0;
        int zeroconnect[V];
        for(int i=0;i<V;i++) zeroconnect[i]=0;
        colors[1]=0;
        zeros++;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v:adj[u]){
                if(colors[v]==-1){
                    colors[v]=1-colors[u];
                    if(colors[v]==0) {
                        zeros++;
                        zeroconnect[u]++;
                    }
                    q.push(v);
                }
            }
        }
        ll total=0;
        for(int i=1;i<V;i++){
            if(colors[i]==1){
                int count=0;
                for(auto v:adj[i]){
                    if(colors[v]==0) count++;
                }
         
                total+=zeros-count;
            }
        }
    
       
        return total;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    Graph g(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
    cout<<g.bipartite();
}
