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
    public:
    Graph(int V){
        this->V=V;
        adj=new list<int>[V];
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void DFSUtil(int s,bool visited[]){
        visited[s]=true;
        for(auto v:adj[s]){
            if(!visited[v]){
                DFSUtil(v,visited);
            }
        }
    }
    int DFS(){
        int count=0;
        bool visited[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        for(int i=1;i<V;i++){
            if(!visited[i]){
                count++;
                DFSUtil(i,visited);
            }
        }
        return count;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    Graph g(n+1);
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        g.addEdge(i,a);
    }
    cout<<g.DFS();
}