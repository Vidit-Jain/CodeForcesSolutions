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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,r,g;
	cin >> n >> r >> g;
	vii v(n);
	ll total=0,necessary=g*n;
	for(int i=0;i<n;i++){
		ll a,b;
		cin >> a >> b;
		total+=a;
		v[i]={b,a};
	}
	sort(v.begin(),v.end());
	ll ans=0;
	for(int i=0;i<n;i++){
		if(total>=necessary) break;
		ll t = min(r-v[i].ss,necessary-total);
		total+=t;
		ans+=t*v[i].ff;
	}
	cout << ans << "\n";
}
