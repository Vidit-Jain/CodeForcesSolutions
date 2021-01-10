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
ll solve(ll a,ll x){
    ll c=0;
    while(a!=0 && a%x==0){
        c++;
        a/=x;
    }
    return c;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        ll count[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            count[i]=solve(arr[i],x);
        }
        ll low=INT_MAX;
        for(int i=0;i<n;i++){
            low=min(low,count[i]);
        }
        ll sum=0;
        bool f=false;
        for(int i=0;i<n;i++){
            if(count[i]==low){
                f=true;
            }
            if(f) sum+=(low+1)*arr[i];
            else sum+=(low+2)*arr[i];
        }
        cout<<sum<<"\n";
    }
    
}