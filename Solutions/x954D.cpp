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
vvi adj(1005,vi(1005,0));
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m,s,t;
	cin >> n >> m >> s >> t;
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		a--;b--;
		adj[a][b]=adj[b][a]=1;
	}
	s--;t--;
	vb visited(n,0);
	queue<int> q;
	q.push(s);
	visited[s]=true;
	vi dF(n,INT_MAX);
	dF[s]=0;
	while(!q.empty()){
		int a=q.front();
		q.pop();
		for(int i=0;i<n;i++){
			if(adj[a][i] && !visited[i]){
				visited[i]=true;
				dF[i]=dF[a]+1;
				q.push(i);
			}
		}
	}
	visited=vb(n,0);
	vi dR(n,INT_MAX);
	dR[t]=0;
	visited[t]=true;
	q.push(t);
	while(!q.empty()){
		int a = q.front();
		q.pop();
		for(int i=0;i<n;i++){
			if(adj[a][i] && !visited[i]){
				visited[i]=true;
				dR[i]=dR[a]+1;
				q.push(i);
			}
		}
	}
	ll count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(!adj[i][j] && dF[i]+dR[j]+1>=dF[t] && dR[i]+dF[j]+1>=dF[t]){
				count++;
			}
		}
	}
	
	cout << count << "\n";
}
