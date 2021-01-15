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
class SegmentTree{
    private:
        ll edgecase=0,choice=0,n=0;                
        ll *st;
        ll getMid(ll s,ll e) { return s + (e -s)/2; }  
        ll wrapper(ll a,ll b){
            if(choice==0){
                return a+b;
            }
            else if(choice==1){
                return min(a,b);
            }
            else return max(a,b);
        }
        ll STUtil(ll arr[],ll sss,ll se, ll si){  
            if (sss == se) return st[si]=arr[sss];  
            ll mid = getMid(sss, se);  
            return st[si]=wrapper(STUtil(arr, sss, mid, si*2+1),STUtil(arr, mid+1, se, si*2+2)); 
        }  
        ll QueryUtil(ll sss,ll se,ll qs,ll qe,ll index){  
            if (qs <= sss && qe >= se)  
                return st[index];  
        
            if (se < qs || sss > qe)  
                return edgecase;  
        
            ll mid = getMid(sss, se);  
            return wrapper(QueryUtil(sss, mid, qs, qe, 2*index+1),QueryUtil(mid+1, se, qs, qe, 2*index+2));  
        }  
    public:                
        ll Query(ll qs,ll qe){  
            if (qs < 0 || qe > n-1 || qs > qe)  return edgecase;
            return QueryUtil(0, n-1, qs, qe, 0);  
        }  
        /* choice = 0 - To make a segment tree for Range Sum Query
         * choice = 1 - To make a segment tree for Range Minimum Query
         * choice = 2 - To make a segment tree for Range Maximum Query
         */
        SegmentTree(ll arr[],ll n,ll choice){
            this->choice=choice;
            this->n=n;

            if(choice==0) edgecase=0;
            else if(choice==1) edgecase=(ll)1e16;
            else edgecase=-(ll)1e16;

            ll max_size = 2*(ll)pow(2,(ll)(ceil(log2(n))))   - 1;  
            st = new ll[max_size];  
        
            STUtil(arr, 0, n-1, 0);  
        }
        
};  
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    tc{
        ll n,m;
        cin>>n>>m;
        ll arr[n+1];
        arr[0]=0;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            arr[i+1]=arr[i]; 
            if(str[i]=='-') arr[i+1]--;
            else arr[i+1]++;
        }
        SegmentTree st1(arr,n+1,1),st2(arr,n+1,2);
        while(m--){
            ll l,r;
            cin>>l>>r;
            ll x = arr[r]-arr[l-1];
            ll low = min(st1.Query(0,l-1),st1.Query(r+1,n)-x);
            ll high = max(st2.Query(0,l-1),st2.Query(r+1,n)-x);
            cout << high - low + 1 << "\n";
        }  
    }
}