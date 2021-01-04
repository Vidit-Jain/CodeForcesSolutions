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
vi *adj;
void dfs(int x,bool visited[],int q){
	if(x==q) return;
	if(visited[x]) return;
	visited[x]=true;
	for(auto s:adj[x]){
		dfs(s,visited,q);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n,m,a,b;
		cin >> n >> m >> a >> b;
		a--;b--;
		adj=new vi[n];
		vii v(m);
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			x--;y--;
			v[i]={x,y};
			adj[x].pb(y);
			adj[y].pb(x);
		}
		bool visited[n],visited2[n];
		for(int i=0;i<n;i++) visited[i]=visited2[i]=false;
		dfs(a,visited,b);
		dfs(b,visited2,a);	
		ll count=0;
		ll acount=0,bv=0,buv=0;
		for(int i=0;i<n;i++) acount+=visited[i];
		for(int i=0;i<n;i++){
			bv+=(visited2[i] && visited[i]);
			buv+=(visited2[i] && !visited[i]);
		}
		count+=(acount-1)*(acount-2)/2;
		buv--;
		count+=(buv)*(buv+bv)-(buv*(buv+1))/2;
		//cout << count << "\n";
		cout << ((n-2)*(n-3))/2 - count << "\n";
	}
}
