#include <bits/stdc++.h>
using namespace std;
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
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
/*DEBUGGING START*/
#define DBG(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr <<"[ "<< *it << " = " << a << " ]"<< endl;
    err(++it, args...);
}
template<typename T, typename... Args>
void DBGV(T a){
    cout<<"[ ";
    for(auto s:a) cout<<s<<", ";
    cout<<"]"<<endl;
}
template<typename T, typename... Args>
void DBGP(T a){
    cout<<"[ ";
    for(auto s:a) cout<<"("<<s.ff<<", "<<s.ss<<"), ";
    cout<<"]"<<endl;
}
/*DEBUGGING END*/
#define MAXN (ll)1e6
vi isprime(MAXN+1,1);
vi primes;
void sieve(){
    isprime[0]=isprime[1]=0;
    for(ll i=2;i<=MAXN;i++){
        if(isprime[i]){
            primes.pb(i);
            for(ll j=i*i;j<=MAXN;j+=i){
                isprime[j]=0;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sieve();
    tc{
        ll d;
        cin>>d;
        ll x=1;
        ll num=1;
        ll count=0;
        
        for(auto p:primes){
            if(p-x>=d){
                num*=p;
                x=p;
                count++;
            }
            if(count==2) break;
        }
        cout<<num<<"\n";
    }
}