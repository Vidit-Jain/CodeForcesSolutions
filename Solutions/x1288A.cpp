#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin>>t;
	while(t--){
		ll n,d;
		cin>>n>>d;
		if(n>=d) cout<<"YES\n";
		else{
			bool flag=false;
			for(int i=1;i<=n;i++){
				if(i+ceil(d/(i+1.0))<=n){
					flag=true;
					break;
				}
			}
			cout<<(flag?"YES\n":"NO\n");
		}
	}
}
