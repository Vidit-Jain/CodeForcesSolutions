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
    tc{
        ll n,m;
        cin>>n>>m;
        vi k(n),c(m);
        for(int i=0;i<n;i++){
            cin>>k[i];
            k[i]--;
        }
        for(int i=0;i<m;i++) cin>>c[i];
        sort(k.begin(),k.end());
        vi q(n);
        for(int i=0;i<n;i++){
            q[i]=c[k[i]];
        }
        int index=0;
        ll sum=0;
        for(int i=n-1;i>=0;i--){
            if(index==m || c[index]>=q[i]){
                sum+=q[i];
            }
            else{
                sum+=c[index];
                index++;
            }
        }
        cout<<sum<<"\n";
    }
}