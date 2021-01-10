#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<ll> vi;
#define ff first
#define ss second
#define MAXN ((ll)1e6+10)

vi isprime(MAXN);
void sieve(){
    for(int i=0;i<MAXN;i++){
        isprime[i]=i;
    } 
    for(int i=2;i<MAXN;i++){
        if(isprime[i]==i){
            for(int j=2*i;j<MAXN;j+=i){
                isprime[j]=i;
            }
        }
    }
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sieve(); 
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi a(n),p(n,1);
        map<ll,ll> m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            ll x=a[i];
            while(x!=1){
                if(p[i]%isprime[x]==0) p[i]/=isprime[x];
                else p[i]*=isprime[x];

                x/=isprime[x];
            }
            m[p[i]]++;
        }
        ll evens=m[1];
        ll maxlen=0;
        ll maxevens=0;
        for(auto s:m){
            maxlen=max(maxlen,s.ss);
            if(s.ss%2==0 || s.ff==1) maxevens+=s.ss;
        }
        ll maxlen2=maxevens;
        for(auto s:m){
            if(s.ss%2) maxlen2=max(maxlen2,s.ss);
        }
        ll arr[2]={maxlen2,maxlen};
        ll q;
        cin>>q; 
        for(int i=0;i<q;i++){
            ll a;
            cin>>a;
            cout<<arr[a==0]<<"\n";
        }
    }
}