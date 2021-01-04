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
		string str;
		cin>>str;
		bool proper=false;
		for(int i=0;i<str.size();i++){
			if(str[i]=='('){
				proper=true;
				break;
			}
			else if(str[i]==')'){
				break;
			}
		}
		if(proper){
			if(str.size()%2==0){
				cout<<"YES\n";
			}else cout<<"NO\n";
		}
		else{
			bool q=false;
			for(int i=0;i<str.size();i++){
				if(str[i]==')') break;
				if(str[i]=='?'){
					q=true;
					break;
				}
			}
			bool q2=false;
			bool open=false;
			for(int i=0;i<str.size();i++){
				if(str[i]=='(') open=true;
				if(open && str[i]=='?'){
					q2=true;
					break;
				}
			}
			if(q && q2 && str.size()%2==0){
				cout<<"YES\n";
			
			}
			else cout<<"NO\n";
		}
	}
}
