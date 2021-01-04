#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define MOD 1000000007
#define ll unsigned long long
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
#define MAXN (ll)5e5+10
ll arr[MAXN];
ll defenselevel[MAXN];
ll sq(ll x,ll y){
	if(x>y) return x-y;
	else return 0;
}
bool check(ll n,ll r,ll k,ll x){
	ll segments[MAXN]={0};
	ll currsum=0;	
	ll ans=0;
	for(int i=0;i<n;i++){
		currsum-=segments[i];	
		if(currsum<sq(x,defenselevel[i])){
			ll temp=sq(x,defenselevel[i])-currsum;
			if(i+2*r+1<n) segments[i+2*r+1]+=temp;
			ans+=temp;
			currsum+=temp;
		} 
	}
	return ans<=k;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,r,k;
	cin >> n >> r >> k;
	for(int i=0;i<n;i++) cin >> arr[i];
	ll window=0;
	for(int i=0;i<=r;i++){
		window+=arr[i];
	}
	defenselevel[0]=window;
	for(int i=1;i<=r;i++){
		window+=((r+i<n)?arr[r+i]:0);
		defenselevel[i]=window;
	}
	for(int i=r+1;i<n;i++){
		window+=((i+r<n)?arr[i+r]:0)-arr[i-r-1];
		defenselevel[i]=window;
	}
	ll lowest=defenselevel[0];
	ll highest=defenselevel[0];
	for(int i=0;i<n;i++){
		lowest=min(lowest,defenselevel[i]);
		highest=max(highest,defenselevel[i]);
	}
	ll qwer=ceil((double)n/(2*r+1));
	qwer = ceil((double)k/qwer) + highest;
	ll dlevel=lowest;
	ll lb=lowest,ub=qwer;
	ll mid = lb + (ub-lb)/2;
	while(k!=0 && lb<=ub){
		if(check(n,r,k,mid)){
			dlevel=mid;
			lb = mid + 1;
		}
		else ub = mid - 1;
			
		mid = lb + (ub-lb)/2;
	}	
	cout << dlevel << "\n";
}
