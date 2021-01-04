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
int signum(int x){
	if(x>0) return 1;
	else if(x<0) return -1;
	else return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<ii,ll> m;
		for(int i=0;i<n;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			int x=c-a;
			int y=d-b;
			int g = __gcd(abs(x),abs(y));
			x/=g;
			y/=g;
			if(y==0) x=signum(x);
			if(x==0) y=signum(y);
			m[make_pair(x,y)]++;
		}
		ll ans=0;
		for(auto s:m){
			ans+=s.ss*m[make_pair(-s.ff.ff,-s.ff.ss)];
		}
		ans/=2;
		cout<<ans<<"\n";
	}
}
