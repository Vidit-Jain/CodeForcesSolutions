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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int m;
		cin>>m;
		int b[m];
		for(int i=0;i<m;i++) cin>>b[i];
		int amax=0,curr=0;
		for(int i=0;i<n;i++){
			curr+=a[i];
			amax=max(amax,curr);			
		}
		curr=0;
		int bmax=0;
		for(int i=0;i<m;i++){
			curr+=b[i];
			bmax=max(bmax,curr);			
		}
		cout << amax+bmax <<"\n";
	}
}
