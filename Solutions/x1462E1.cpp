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
                    int y=(i!=1)?(dp[i]-dp[i-2]):0;
                    int x=dp[i+1]-dp[i];
                    for(int m=0;m<x;m++){
                        ll t=y+m;
                        count+=(t*(t-1))/2;
                    }
            }
            cout<<count<<"\n";
        }
    }













































































