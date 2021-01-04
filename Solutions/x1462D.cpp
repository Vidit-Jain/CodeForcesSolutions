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
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        ll total=0,highest=arr[0];
        for(int i=0;i<n;i++){
            total+=arr[i];
            highest=max(highest,arr[i]);
        }
        vi sizes;
        for(ll x=n;x>=1;x--){
            if(total%x==0 && total/x>=highest) sizes.pb(x);
        }
        bool flag=false;
        int a=n-1;
        for(auto p:sizes){
            ll sum=0;
            bool temp=true;
            ll desired=total/p;
            
            for(int e=0;e<n;e++){
                if(arr[e]==desired && sum!=0){
                    temp=false;
                    break;
                }
                else{
                    sum+=arr[e];
                    if(sum>desired){
                        temp=false;
                        break;
                    }
                    if(sum==desired) sum=0;
                }
            }
            if(temp){
                flag=true;
                a=n-p;
                break;
            }
        }
        cout<<a<<"\n";
    }
}