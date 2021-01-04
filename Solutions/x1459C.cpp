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
	ll n,m;
	cin >> n >> m;
	ll a[n],b[m];
	
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<m;i++) cin >> b[i];
	ll g = 0;
	for(int i=1;i<n;i++){
		g = __gcd(g,a[i]-a[0]);
	}
	for(int i=0;i<m;i++){
		cout << __gcd(g,a[0]+b[i]) << " ";
	}
	cout << "\n";
}

