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
    const int N = 1000001;
     
    ll factorialNumInverse[N + 1];
    ll naturalNumInverse[N + 1];
    ll fact[N + 1];
    void InverseofNumber(ll p)
    {
        naturalNumInverse[0] = naturalNumInverse[1] = 1;
        for (int i = 2; i <= N; i++)
            naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
    }
    void InverseofFactorial(ll p)
    {
        factorialNumInverse[0] = factorialNumInverse[1] = 1;
     
     
        for (int i = 2; i <= N; i++)
            factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
    }
    void factorial(ll p)
    {
        fact[0] = 1;
        for (int i = 1; i <= N; i++) {
            fact[i] = (fact[i - 1] * i) % p;
        }
    }
    ll Binomial(ll N, ll R, ll p)
    {   if(N<R) return 0;
        ll ans = ((fact[N] * factorialNumInverse[R])
                  % p * factorialNumInverse[N - R])
                 % p;
        return ans;
    }
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        ll p = 1000000007;
        InverseofNumber(p);
        InverseofFactorial(p);
        factorial(p);
        while(t--){
            int n,m,k;
            cin>>n>>m>>k;
            int arr[n];
            set<int> unique;
            for(int i=0;i<n;i++) {
                cin>>arr[i];
                unique.insert(arr[i]);
            }
            sort(arr,arr+n);
            int limit=(int)10e5+5;
            int dp[n];
            dp[0]=dp[1]=0;
            int index=0;
            
            for(int i=2;i<limit;i++){
                dp[i]=dp[i-1];
                if(index==n) break;
                for(int x=index;x<n;x++){
                    if(arr[x]<i){
                        dp[i]++;
                        index++;
                    }
                    else break;
                }
            }
            ll count=0;
            
            for(auto i:unique){
                
                int y=(i>=k)?(dp[i]-dp[i-k]):dp[i];
                int x=dp[i+1]-dp[i];
                for(int nm=0;nm<x;nm++){
                    ll t=y+nm;
                    // count+=((t*(t-1))/2);
                    // cout<<"asdf"<<endl;
                    // count+=printNcR(t,m-1)%MOD;
                    // cout<<count<<" sss\n";
                    count+=Binomial(t,m-1,MOD);
                    count%=MOD;
                }
            }
            cout<<count<<"\n";
        }
    }