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
		ll n,W;
		cin >> n >> W;
		vii arr(n);
		for(int i=0;i<n;i++) {
			ll x;
			cin >> x;
			arr[i] = {x,i};
		}
		sort(arr.begin(),arr.end());
		ll low=W/2 + W%2;
		ll sum=0;
		vi elements;
		for(int i=n-1;i>=0;i--){
			if(arr[i].ff<=W) {
				sum+=arr[i].ff;
				elements.pb(arr[i].ss+1);	
			}
			if(sum>=low) break;
		}
		if(sum<low || elements.size()==0) cout<<"-1\n";
		else{
			sort(elements.begin(),elements.end());
			cout<<elements.size()<<"\n";
			for(auto x:elements){
				cout<<x<<" ";
			}
			cout<<"\n";
		}
	}
}
