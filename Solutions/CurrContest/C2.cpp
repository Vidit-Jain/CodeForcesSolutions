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
	cin>>t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		int h[n];
		for(int i=0;i<n;i++) cin >> h[i];
		ll currlow=h[0],currhigh=h[0];
		bool flag=true;
		for(int i=1;i<n;i++){
			ll low=h[i],high=h[i]+k-1;	
			if(high+k-1<currlow){
				flag=false;
				break;
			}
			if(currhigh+k-1<low){
				flag=false;
				break;
			}
			currlow=max(low,currlow-k+1);
			currhigh=min(high,currhigh+k-1);
		}
		if(currlow!=h[n-1]) flag=false;
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
