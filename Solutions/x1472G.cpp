#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define MOD 1000000007
#define ll long long
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
#define pq priority_queue
#define ff first
#define ss second
#define pb push_back
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
vvi adj;
vi low,d;
ll dfs(ll x){
    if(low[x]!=INT_MAX) return low[x];
    low[x]=d[x];
    for(auto s:adj[x]){
        low[x]=min(low[x],d[s]);
    }
    for(auto s:adj[x]){
        if(d[s]>d[x]){
            low[x]=min(low[x],dfs(s));
        }
    }
    return low[x];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        adj=vvi(n,vi());
        low.resize(n);
        for(int i=0;i<n;i++){
            low[i]=INT_MAX;
        }
        for(int i=0;i<m;i++){
            ll a,b;
            cin >> a >> b;
            a--;b--;
            adj[a].pb(b);
        }
        d.resize(n);
        for(int i=0;i<n;i++) d[i]=INT_MAX;
        queue<int> q;
        q.push(0);
        d[0]=0;
        while(!q.empty()){
            ll x = q.front();
            q.pop(); 
            for(auto s:adj[x]){ 
                if(d[s]==INT_MAX){
                    q.push(s);
                    d[s]=d[x]+1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(low[i]==INT_MAX) dfs(i);
        }
        for(int i=0;i<n;i++){
            cout<<low[i]<<" \n"[i==n-1];
        }
    }
}