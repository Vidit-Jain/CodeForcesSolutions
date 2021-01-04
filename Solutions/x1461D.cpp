#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
vector<ll> v;
vector<ll> prefix;
unordered_set<ll> pqr;
void merge(ll a,ll b){
    pqr.insert(prefix[b+1]-prefix[a]);
    ll d=(v[a]+v[b])/2;
    ll x=a;
    if(v[a]==v[b]) return;
    vector<ll>::iterator ls=upper_bound(v.begin()+a,v.begin()+b+1,d);
    ls--;
    x=ls-v.begin();
    merge(a,x);
    merge(x+1,b);
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin >> n >> q;
        v.resize(n);
        prefix.resize(n+1);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        prefix[0]=0;
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+v[i-1];
        }
        merge(0,n-1);
        for(int i=0;i<q;i++){
            int p;
            cin>>p;
            if(pqr.find(p)!=pqr.end()) cout<<"Yes\n";
            else cout<<"No\n";
        }
        v.clear();
        prefix.clear();
        pqr.clear();
    }
}