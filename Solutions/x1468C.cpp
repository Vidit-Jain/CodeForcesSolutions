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
	queue<ii> q;
	vii v;
	make_heap(v.begin(),v.end());
	int currpos=1;
	set<int> visited;
	while(t--){
		int id;
		cin>>id;
		if(id==1){
			int money;
			cin>>money;
			q.push({currpos,money});
			v.pb({money,-currpos});
			push_heap(v.begin(),v.end());
			currpos++;
		}
		else if(id==2){
			while(visited.find(q.front().ff)!=visited.end()){
				q.pop();
			}
			cout<<q.front().ff<<" ";
			visited.insert(q.front().ff);
			q.pop();
		}
		else if(id==3){
			while(visited.find(-v.front().ss)!=visited.end()){
				pop_heap(v.begin(),v.end());
				v.pop_back();
				int i=1;
				DBG(i);
			}
			cout<<-v.front().ss<<" ";
			visited.insert(-v.front().ss);
			pop_heap(v.begin(),v.end());
			v.pop_back();
		}
	}
	
}
