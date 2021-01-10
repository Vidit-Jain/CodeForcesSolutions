#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            adj[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b]=adj[b][a]=1;
    }
    stack<int> s;
    int total=0;
    while(true){
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=n;j++){
            if(adj[i][j]==1) count++;
        }
        if(count==1) s.push(i);
    }
    if(s.size()==0) break;
    total++;
    while(!s.empty()){
        int m=s.top();
        s.pop();
        for(int i=1;i<=n;i++){
            adj[m][i]=adj[i][m]=0;
        }
    }
    }
    cout<<total<<"\n";
}
