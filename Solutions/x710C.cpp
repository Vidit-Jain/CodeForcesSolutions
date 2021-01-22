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
#define tc int t; cin>>t; while(t--)
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    ll odd=1;
    ll even=2;
    for(int i=0;i<n;i++){
        ll x=n-2*abs(i-n/2);
        ll e = (n-x)/2;
        for(int j=0;j<e;j++){
            cout<<even<<" ";
            even+=2; 
        }
        for(int j=0;j<x;j++){
            cout<<odd<<" ";
            odd+=2;
        }
        for(int j=0;j<e;j++){
            cout<<even<<" ";
            even+=2;
        }
        cout<<"\n";
    }
}