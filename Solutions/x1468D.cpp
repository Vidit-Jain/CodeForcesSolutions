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
		ll n,m,a,b;
		cin>>n>>m>>a>>b;
		ll arr[m];
		for(int i=0;i<m;i++) cin>>arr[i];
		sort(arr,arr+m);
		ll x=abs(b-a)-1;
		x--;
		x=min(m-1,x);
		ll count=0;
		ll curr=b-2;
		if(b-a<0){
			curr=n-b-1;
		}
		for(int i=x;i>=0;i--){
			if(arr[i]<=curr){
				curr--;
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
