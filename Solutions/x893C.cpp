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
    int *cost;
    list<int> *adj;
    public:
    Graph(int V,int cost[]){
        this->V=V;
        adj=new list<int>[V];
        this->cost=cost;
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int DFSUtil(int s,bool visited[]){
        visited[s]=true;
        int minimum=cost[s];
        for(auto i:adj[s]){
            if(!visited[i]){
                minimum=min(minimum,DFSUtil(i,visited));
            }
        }
        return minimum;
    }
    ll DFS(){
        bool visited[V];
        for(int i=1;i<V;i++){
            visited[i]=false;
        }
        ll sum=0;
        for(int i=1;i<V;i++){
            if(!visited[i]){
                sum+=DFSUtil(i,visited);
            }
        }
        return sum;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int cost[n+1];
    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }
    Graph g(n+1,cost);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
    cout<<g.DFS()<<"\n";
}
