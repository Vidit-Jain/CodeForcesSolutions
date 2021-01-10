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
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        vi arr(n+1);
        ll dp[n+1];
        for(int i=0;i<=n;i++) dp[i]=0;
        for(int i=1;i<=n;i++) cin >>arr[i];
        for(int i=n;i>0;i--){
            dp[i]=arr[i];
            if(i+arr[i]<=n) dp[i]+=dp[i+arr[i]];
        }
        ll high=0;
        for(int i=1;i<=n;i++){
            high=max(high,dp[i]);
        }
        cout<<high<<"\n";
    }
}