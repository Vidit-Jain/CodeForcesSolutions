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
    int n[3];
    cin>>n[0]>>n[1]>>n[2];
    ll x[n[0]],y[n[1]],z[n[2]];
    for(int i=0;i<n[0];i++) cin>>x[i];
    for(int i=0;i<n[1];i++) cin>>y[i];
    for(int i=0;i<n[2];i++) cin>>z[i];
    ll a[n[0]+n[1]+n[2]];
    ll tlength=n[0]+n[1]+n[2];
    ll sum=0;
    ll sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n[0];i++){
        a[i]=x[i];
        sumx+=x[i];
    }
    for(int i=0;i<n[1];i++){
        a[i+n[0]]=y[i];
        sumy+=y[i];
    }
    for(int i=0;i<n[2];i++){
        a[i+n[0]+n[1]]=z[i];
        sumz+=z[i];
    }

    for(int i=0;i<tlength;i++){
        sum+=a[i];
    }
    sort(a,a+tlength);
    sort(x,x+n[0]);
    sort(y,y+n[1]);
    sort(z,z+n[2]);
    ll q[3]={x[0],y[0],z[0]};
    sort(q,q+3);
    ll t1=sum-2*(q[0]+q[1]);
    ll t2=sum-2*min(sumx,min(sumy,sumz));
    cout<<max(t1,t2)<<"\n";
}