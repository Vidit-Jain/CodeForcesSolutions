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
bool bxor(bool a,bool b){
	return !(a&&b);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int n=str.size();
		vii v(n);	
		int x=0,y=0;
		for(int i=0;i<n;i++){
			if(str[i]=='R') x++;
			if(str[i]=='L') x--;
			if(str[i]=='U') y++;
			if(str[i]=='D') y--;
			v.pb({x,y});
		}
		int finx=0,finy=0;
		for(auto obstacle:v){
			int x=0,y=0; 
			for(int i=0;i<n;i++){
				if(str[i]=='R' && bxor(obstacle.ss==y,obstacle.ff==x+1)) x++; 
				if(str[i]=='U' && bxor(obstacle.ff==x, obstacle.ss==y+1)) y++;
				if(str[i]=='L' && bxor(obstacle.ss==y, obstacle.ff==x-1)) x--;
				if(str[i]=='D' && bxor(obstacle.ff==x, obstacle.ss==y-1)) y--;
			}
			if(x==0 && y==0){
				finx=obstacle.ff;
				finy=obstacle.ss;
			}
		}
		cout<<finx<<" "<<finy<<"\n";
	}
}
