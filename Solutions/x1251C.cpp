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
		string str;
		cin >> str;
		vi even,odd;
		for(int i=0;i<str.size();i++){
			if(str[i]%2==0) even.pb(str[i]-48);
			else odd.pb(str[i]-48);
		}
		ll i=0,j=0;	
		while((i<even.size()) || (j<odd.size())){
			if(i==even.size() || (j!=odd.size() && even[i]>odd[j])){
				cout<<odd[j];
				j++;
			}
			else{ 
				cout<<even[i];
				i++;
			}
		}
		cout<<"\n";
	}
}
