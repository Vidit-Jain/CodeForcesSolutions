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
		ll c[3],a[5],current[3]={0};
		for(int i=0;i<3;i++) cin >> c[i];
		for(int i=0;i<5;i++) cin >> a[i];
		bool flag=true;
		for(int i=0;i<3;i++){
			current[i]=a[i];
			flag= flag && (a[i]<=c[i]);
		}
		if(flag){
			int temp=min(c[0]-current[0],a[3]);
			current[0]+=temp;
			a[3]-=temp;
			temp=min(c[1]-current[1],a[4]);
			current[1]+=temp;
			a[4]-=temp;
			current[2]+=a[3]+a[4];
			if(current[2]>c[2]) cout<<"NO\n";
			else cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
