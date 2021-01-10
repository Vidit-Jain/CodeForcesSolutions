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
ll arr[(ll)1e6];
void fib(){
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<(ll)1e6;i++){
        arr[i] = (arr[i-1]+arr[i-2])%MOD;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fib();
    ll n,m;
    cin >> n >> m;
    cout << (((2ll*(arr[n]+arr[m]-1))%MOD)+MOD)%MOD << "\n";   
}