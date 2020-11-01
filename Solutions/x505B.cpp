#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
class graph{
    int V,M;
    list<pair<int,int>> *adj;
    public:
        graph(int V,int M){
            this->V=V;
            this->M=M;
            adj=new list<pair<int,int>>[V];
        }
        void addEdge(int u,int v,int c){
            adj[u].push_back({v,c});
            adj[v].push_back({u,c});
        }
        void DFS(int x,int v,int c,bool visited[]){
            visited[x]=true;
            if(x==v) return;
            for(auto s:adj[x]){
                if(s.second==c && !visited[s.first]){
                    DFS(s.first,v,c,visited);
                }
            }
        }
        bool isReachable(int u,int v,int c){
            bool visited[V];
            for(int i=0;i<V;i++) visited[i]=false;
            DFS(u,v,c,visited);
            return visited[v];
        }
        int total(int u,int v){
            bool colorused[M+1];
            for(int i=0;i<=M;i++) colorused[i]=false;
            int count=0;
            for(auto x:adj[u]){
                if(!colorused[x.second]){
                    colorused[x.second]=true;
                    count+=isReachable(u,v,x.second);
                }
            }
            return count;
        }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    graph g(n+1,m);
    for(int i=0;i<m;i++){
        int u,v,c;
        cin>>u>>v>>c;
        g.addEdge(u,v,c);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<g.total(a,b)<<"\n";
    }
}