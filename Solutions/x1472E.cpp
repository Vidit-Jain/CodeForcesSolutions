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
        int n;
        cin>>n;
        vector<pair<ii,ll>> dimensions;
        for(int i=0;i<n;i++){
            ll w,h;
            cin>>w>>h;
            if(w>h){
                ll t=h;
                h=w;
                w=t;
            }
            dimensions.pb({{w,h},i+1});
        }
        sort(dimensions.begin(),dimensions.end());
        ll indexes[n+1];
        for(int i=0;i<=n;i++){
            indexes[i]=-1;
        }
        bool changed=true;
        //DBG(dimensions[0].ff)
        ii pqueue=dimensions[0].ff;
        ll pindex=dimensions[0].ss;
        ii currmin={INT_MAX,INT_MAX};
        ll currindex=-1;
        for(int i=1;i<n;i++){
            if(changed && dimensions[i].ff.ff!=pqueue.ff){
                currmin=pqueue;
                currindex=pindex;
                changed=false;
            }
            if(dimensions[i].ff.ss>currmin.ss){
                indexes[dimensions[i].ss]=currindex;
            }
            if(dimensions[i].ff.ss<pqueue.ss){
                pindex=dimensions[i].ss;
                pqueue=dimensions[i].ff;
                changed=true;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<indexes[i]<<" \n"[i==n];
        }
    }
}