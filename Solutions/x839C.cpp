#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define MOD 1000000007
#define ll long long
typedef pair<ll, ll> ii;
typedef vector<int> vi;
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
vi adj[(ll)2e5+17];
double dfs(int x,int v){
	double total=0;
	ll count=0;
	for(auto s:adj[x]){
		if(s!=v){
			count++;
			total+=dfs(s,x);
		}
	}
	return 1+total/((count==0)?1:count);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	
	//for(int i=0;i<n;i++) adj[i]=vi();
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		a--;b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	double expected=dfs(0,-1)-1;
	printf("%.12lf\n",expected);
}
