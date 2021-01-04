#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define MOD 998244353ll
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
ll power(ll x,ll y){
	if(y==0) return 1;
	if(y==1) return x;
	ll a = power(x,y/2)%MOD;
	return ((a*a)%MOD * power(x,y%2))%MOD;
}
ll inverse(ll x){
	return power(x%MOD,MOD-2);
}
ii addFrac(ii f1,ii f2){
	ii f3 = {f1.ff*f2.ss + f2.ff*f1.ss,f1.ss*f2.ss};
	if(f1.ss==0)
		f3=f2;
	ll g = __gcd(f3.ff,f3.ss);
	f3.ff=f3.ff/g;
	f3.ff%=MOD;
	f3.ss=f3.ss/g;
	f3.ss%=MOD;
	return f3;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<ll,ii> m;
	map<ll,ll> freq2;
	ll n;
	cin >> n;
	for(int i=0;i<n;i++){
		ll k;
		cin >> k;
		for(int j=0;j<k;j++){
			ll x;
			cin >> x;
			if(m.find(x)==m.end()) m[x]={0,0};
			m[x]=addFrac(m[x],{1,k});
			freq2[x]++;
		}
	}
	ii t={0,0};
	for(auto s:m){
		s.ss.ff=(freq2[s.ff]*s.ss.ff + MOD)%MOD;
		t=addFrac(t,s.ss);
	}
	t.ss=(((n*n)%MOD) * t.ss) % MOD;
	ll sum = ((t.ff * inverse(t.ss)) % MOD);
	cout << sum << "\n";
}

