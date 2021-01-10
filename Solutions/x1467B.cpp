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
ll intimidate(vi arr,ll n,vi &peak, vi &valley){
    ll count=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            count++;
            peak[i]=1;
        }
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) {
            count++;
            valley[i]=1;
        }
    }
    return count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x=0;
    int t;
    cin>>t;
    while(t--){
        x++;
        ll n;
        cin>>n;
        vi arr(n),peak(n,0),valley(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll total=intimidate(arr,n,peak,valley);
        ll best=0;
        for(int i=0;i<n;i++){
            if(i!=n-1){
                ll count=0;
                ll right=arr[i+1];
                count+=(peak[i] || valley[i]) + (peak[i+1] || valley[i+1]);
                if(i!=0 && ((peak[i-1] && right>=arr[i-1]) || (valley[i-1] && right<=arr[i-1]) )) count++;
                if(i>1 && (arr[i-1]>arr[i-2] && arr[i-1]>right)) count--;
                if(i>1 && (arr[i-1]<arr[i-2] && arr[i-1]<right)) count--;
                best=max(best,count);
            }
            if(i!=0){
                ll count=0;
                ll left=arr[i-1];
                count+=(peak[i] || valley[i]) + (peak[i-1] || valley[i-1]);
                if(i!=n-1 && ((peak[i+1] && left>=arr[i+1])|| (valley[i+1] && left<=arr[i+1]))) count++;
                if(i<n-2 && (arr[i+1]>arr[i+2] && arr[i+1]>left)) count--;
                if(i<n-2 && (arr[i+1]<arr[i+2] && arr[i+1]<left)) count--;
                best=max(count,best);
            }
        }
        cout<<total-best<<"\n";
    }
}