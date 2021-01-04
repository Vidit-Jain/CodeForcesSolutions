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
	string str;
	cin >> str;
	ll n = str.size();
	vector<pair<char,ll>> v;
	v.pb({str[0],1});
	int index=0;
	for(int i=1;;){
		while(i<n && str[i]==v[index].ff){
			v[index].ss++;
			i++;
		}
		if(v[index].ss>2)v[index].ss=2;
		if(i==n) break;
		v.pb({str[i],1});
		i++;
		index++;
	}
	for(int i=1;i<v.size();i++){
		if(v[i].ss==2 && v[i-1].ss==2){
			v[i].ss=1;
		}
	}
	for(auto s:v){
		for(int i=0;i<s.ss;i++){
			cout<<s.ff;
		}
	}
	cout<<"\n";
}
