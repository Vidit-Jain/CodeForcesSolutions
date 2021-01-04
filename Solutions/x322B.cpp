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
	ll a,b,c;
	cin >> a >> b >> c;
	ll count = (a/3) + (b/3) + (c/3);	
	ll ta=a%3,tb=b%3,tc=c%3;
	bool flag=(a!=0) && (b!=0) && (c!=0);
	if(a%3==0 && flag) {
		ta = 3;
		count--;
	}
	if(b%3==0 && flag) {
		tb = 3;
		count--;
	}
	if(c%3==0 && flag) {
		tc = 3;
		count--;
	}
	count += max(min(ta,min(tb,tc)),ta/3+tb/3+tc/3);	

	cout << count << "\n";
}
