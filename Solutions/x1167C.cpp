#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int reach[500001];
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
    int dfs(){
        int visited[V];
        for(int i=0;i<V;i++){
            visited[i]=-1;
        }
        int currid=1;
        for(int i=1;i<V;i++){
            if(visited[i]==-1){
                int l=dfsutil(i,visited,currid);
                reach[currid]=l;
                currid++;
            }
        }
        for(int i=1;i<V;i++){
            cout<<reach[visited[i]]<<" ";
        }
    }
    int dfsutil(int s,int visited[],int id){
        int total=1;
        visited[s]=id;
        for(auto x:adj[s]){
            if(visited[x]==-1){
                total+=dfsutil(x,visited,id);
            }
        }
        return total;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    Graph g(n+1);
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        if(k<=1){
            int a;
            for(int m=0;m<k;m++) cin>>a;
        }
        else{
            int arr[k];
            cin>>arr[0];
            for(int i=1;i<k;i++){
                cin>>arr[i];
                g.addEdge(arr[i-1],arr[i]);
            }
            
        }
    }
    g.dfs();
}
    