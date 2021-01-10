#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
string compress(string str,int n){
	int firstone=-1;
	int lastzero=-1;
	for(int i=0;i<n;i++){
		if(str[i]=='1'){
			firstone=i;
			break;
		}
	}
	if(firstone==-1) return str;
	for(int i=firstone;i<n;i++){
		if(str[i]=='0'){
			lastzero=i;
		}
	}
	if(lastzero==-1) return str;
	// cout<<"alsdjfk "<<firstone<<"\n";
	return str.replace(str.begin()+firstone,str.begin()+lastzero,"");
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin>>t;
	while(t--){
		int n;
		string str;
		cin>>n>>str;
		cout<<compress(str,n)<<"\n";
	}
}
