#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
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
    }
    void DFSUtil(int s,int depths[],int currdepth){
        if(currdepth<depths[s]) return;
        depths[s]=currdepth;
        for(auto x: adj[s]){
            if(currdepth+1>depths[x]) DFSUtil(x,depths,currdepth+1);
        }
    }
    int DFS(int currindex){
        int depths[currindex];
        for(int i=0;i<currindex;i++){
            depths[i]=-1;
        }
        DFSUtil(0,depths,1);
        int maxdepth=-1;
        for(int i=0;i<currindex;i++){
            maxdepth=max(maxdepth,depths[i]);
        }
        return maxdepth;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    map<string,int> dictionary;
    dictionary.insert(pair<string,int>("polycarp",0));
    int currindex=1;
    Graph g(1000);
    while(n--){
        string firstname,reposted,secondname;
        cin>>firstname>>reposted>>secondname;
        tolowercase(firstname);
        tolowercase(secondname);
        if(dictionary.count(firstname)==0){
            dictionary.insert(pair<string,int>(firstname,currindex));
            currindex++;
        }
        if(dictionary.count(secondname)==0){
            dictionary.insert(pair<string,int>(secondname,currindex));
            currindex++;
        }
        g.addEdge(dictionary.lower_bound(secondname)->second,dictionary.lower_bound(firstname)->second);
        
    }
    int ans=g.DFS(currindex);
    cout<<ans;
}