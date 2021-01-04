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
vi arr;
ll n,k;
bool check(ll median){
	ll pos = n/2;
	if(arr[pos]>=median) return true;
	ll a = lower_bound(arr.begin(),arr.end(),median) - arr.begin() - 1;
	ll count = 0;
	for(int i=pos;i<=a;i++){
		count += median - arr[i]; 
	}
	return count<=k;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	arr.resize(n);
	for(int i=0;i<n;i++) cin >> arr[i];
	sort(arr.begin(),arr.end());
	ll low = arr[n/2], high = (ll)1e10, mid = low + (high-low)/2;
	ll ans = arr[n/2];
	while(low<=high){
		if(check(mid)){
			ans = max(ans,mid);
			low = mid + 1;
		}
		else high = mid - 1;

		mid = low + (high-low)/2;
	}	
	cout << ans << "\n";
}
