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
		int s=0,questions=0;
		bool flag=true;
		for(int i=0;i<str.size();i++){
			if(str[i]=='('){
				s++;
			}
			else if(str[i]==')'){
				s--;
				if(s<0){
					s=0;
					questions--;
					if(questions<0){
						flag=false;
					}
				}
			}
			else questions++;
		}
		questions-=s;
		if(questions<0 || questions%2!=0) flag=false;
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
