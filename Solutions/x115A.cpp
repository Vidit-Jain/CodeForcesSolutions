#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long
#define boolean bool
class Graph{
    public:
    list<int> *adj;
    int V;
    Graph(int V){
        this->V=V;
        adj=new list<int>[V+1];

    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    void DFSUtil(int s,boolean visited[],stack<pair<int,int>> &topostack,int level){
        visited[s]=true;
        for(auto i:adj[s]){
            if(!visited[i])
            DFSUtil(i,visited,topostack,level+1);
        }
        pair<int,int> a(s,level);
        topostack.push(a);
    }
    void DFS(){
        boolean visited[V+1];
        stack<pair<int,int>> topostack;
        for(int i=1;i<=V;i++){
            int j;
            rep1(j,V+1){
            visited[j]=false;
            }
            DFSUtil(i,visited,topostack,1);
        }
        int maxlevel=1;
        while(!topostack.empty()){
            pair<int,int> p=topostack.top();
            topostack.pop();
            maxlevel=max(maxlevel,p.second);
        }
        cout<<maxlevel<<endl;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int V;
    cin>>V;
    Graph g(V);
    int i;
    rep1(i,V+1){
        int num;
        cin>>num;
        if(num!=-1){
            g.addEdge(num,i);
        }
    }
    g.DFS();
}