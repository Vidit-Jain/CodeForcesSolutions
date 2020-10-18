#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
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
        if(u==v) return;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void DFSUtil(vector<int> &component,bool *visited,int v){
        visited[v]=true;
        component.push_back(v);
        for(auto s:adj[v]){
            if(!visited[s]) DFSUtil(component,visited,s);
        }
    }
    int *DFS(){
        bool *visited=new bool[V];
        int *levels=new int[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
            levels[i]=0;
        }
        for(int i=1;i<V;i++){
            if(!visited[i]){
                vector<int> component;
                DFSUtil(component,visited,i);
                int days=component.size();
                for(auto s:component){
                    levels[s]=days;
                }
            }
        }
        return levels;
    }
    bool *copy(bool *visited){
        bool *a=new bool[V];
        for(int i=0;i<V;i++) a[i]=visited[i];
        return a;
    }
    void diff(bool *a,bool *visited,int *levels){
        int sum=0;
        for(int i=1;i<V;i++) {
            if(a[i]!=visited[i]) sum++;
        }
        for(int i=1;i<V;i++){
            if(a[i]!=visited[i]){
                levels[i]=sum;
                visited[i]=a[i];
            }
        }
    }

};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Graph g(n+1);
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            g.addEdge(a,i);
        }
        int *levels=g.DFS();
        for(int i=1;i<=n;i++){
            cout<<levels[i]<<" ";
        }
        cout<<"\n";
    }
}