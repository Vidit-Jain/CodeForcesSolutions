#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

class Graph{
    int V;
    list<int> *adj;
    int *color;
    int *sameid;
    public:
    Graph(int V){
        this->V=V;
        adj=new list<int>[V];
        color=new int[V];
        for(int i=0;i<V;i++){
            color[i]=0;
        }
    }
    int DFSUtil(int s,int directparent, bool visited[]){
        visited[s]=true;
        int total=0;
        if(color[s]!=color[directparent]) total++;
        for(auto x:adj[s]){
            if(!visited[x]){
                total+=DFSUtil(x,s,visited);
            }
        }
        return total;
    }
    int DFS(){
        bool visited[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        int total=1+DFSUtil(1,1,visited);
        return total;
    }
    void setcolors(int colors[]){
        for(int i=1;i<V;i++){
            color[i]=colors[i];
        }
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    Graph g(n+1);
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        g.addEdge(i+1,a);
    }
    int color[n+1];
    for(int i=1;i<=n;i++){
        cin>>color[i];
    }
    g.setcolors(color);
    
    cout<<g.DFS();
}