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
	int n,element;
	cin >> n >> element;
	int arr[n+2];
	for(int i=1;i<=n;i++) cin >> arr[i];
	bool flag=false;
	for(int i=1;i<=n;i++){
		flag = flag || (element==arr[i]);
	}
	if(!flag){
		n++;
		arr[n]=element;
	}
	sort(arr+1,arr+1+n);
	int lowest=INT_MAX;
	int currmedian=(n+1)/2;
	for(int i=1;i<=n;i++){
		if(element==arr[i]){
			if(i>currmedian){
				lowest=min(lowest,2*i-n-1);
			}
			else if(i<currmedian){
				lowest=min(lowest,n-2*i);
			}
			else{
				lowest=0;
			}
		}
	}
	cout << lowest+(!flag) << "\n";
}
