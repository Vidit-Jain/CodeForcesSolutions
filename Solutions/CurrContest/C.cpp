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
		ll h[n];
		for(int i=0;i<n;i++) cin >> h[i];
		ll currleast=h[0],currhighest=h[0]+k-1;
		ll peak=0;
		for(int i=1;i<n;i++){
			if(h[peak]<=h[i]) peak=i;
		} 
		bool flag=true;
		for(int i=1;i<=peak;i++){
			//DBG(currleast);
			//DBG(currhighest);
			ll temp=max(h[i],currleast+1-k);
			if(temp>=currhighest+k || temp-h[i]>k-1){
				//DBG(temp);
				flag=false;
				break;
			}
			ll temp2=min(h[i]+k-1,currhighest+k-1);
			if(temp2<h[i] || temp2+k-1<currleast){
				//DBG(temp2);
				flag=false;
				break;
			}
			currleast=temp;
			currhighest=temp2;

		}
		currleast=h[n-1];
		currhighest=h[n-1]+k-1;
		for(int i=n-2;i>=peak;i--){
			//DBG(currleast);
			//DBG(currhighest);
			ll temp=max(h[i],currleast+1-k);
			if(temp>=currhighest+k || temp-h[i]>k-1){
				//DBG(temp);
				flag=false;
				break;
			}
			ll temp2=min(h[i]+k-1,currhighest+k-1);
			if(temp2<h[i] || temp2+k-1<currleast){
				flag=false;
				break;
			}
			currleast=temp;
			currhighest=temp2;

		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
