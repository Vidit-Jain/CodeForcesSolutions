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
bool isSystemOne(string str){
	int n=str.size();
	for(int i=1;i<n;i++){
		if(isupper(str[i]) && isdigit(str[i-1])){
			return false;
		}
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int n=str.size();
		if(isSystemOne(str)){
			string column="";
			for(int i=0;isupper(str[i]) && i<n;i++){
				column=column+str[i];	
			}
			ll rownumber=0;
			for(int i=column.size();isdigit(str[i]) && i<n;i++){
				rownumber*=10;
				rownumber+=str[i]-48;
			}
			ll columnnumber=0;
			int index=0;
			for(int i=column.size()-1;i>=0;i--){
				columnnumber+=(ll)pow(26,index)*(column[i]-'A'+1);
				index++;
			}
			cout<<"R"<<rownumber<<"C"<<columnnumber<<"\n";
		}
		else{
			ll rownumber=0;
			int a=1;
			for(int i=1;i<n && isdigit(str[i]);i++){
				rownumber*=10;
				rownumber+=str[i]-48;
				a++;
			}
			ll columnnumber=0;
			for(int i=a+1;i<n;i++){
				columnnumber*=10;
				columnnumber+=str[i]-48;
			}
			string col="";
			while(columnnumber!=0){
				int m=columnnumber%26;
				char x=(m==0)?'Z':(m-1+'A');
				col=x+col;
				columnnumber/=26;
				columnnumber-=(m==0);
			}
			cout<<col<<rownumber<<"\n";
		}
	}
}
