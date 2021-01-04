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
	int t;
	cin >> t;
	while(t--){
		ll n,w;
		cin >> n >> w;
		vi arr(n);
		vii a(n);
		for(int i=0;i<n;i++){
			ll x;
			cin >> x;
			a[i]={x,i+1};
		}
		sort(arr.begin(),arr.end());
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		reverse(arr.begin(),arr.end());
		ll sum=0;
		vi q;
		bool flag = false;
		for(int i=0;i<n;i++){
			if(a[i].ff>w) continue;
			sum += a[i].ff;
			q.pb(a[i].ss);
			if(sum>=(w/2 + w%2)){
				flag=true;
				break;
			}
		}
		if(flag){
			cout << q.size() << "\n";
			sort(q.begin(),q.end());
			for(auto s:q){
				cout << s << " ";
			}
			cout << "\n";
		}
		else cout << "-1\n";
	}
}
