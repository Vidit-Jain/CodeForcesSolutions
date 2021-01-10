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
        ll n,m;
        cin>>n>>m;
        vii blocked(m); 
        for(int i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            a--;b--;
            blocked[i]={b,a};
        }
        sort(blocked.begin(),blocked.end());
        bool flag=true;
        ll rowblocked=-1;
        ll indexblocked=-1;
        for(int i=0;i<m;i++){
            if((i==m-1) || (blocked[i].ff != blocked[i+1].ff)){
                if(rowblocked==-1){
                    rowblocked=blocked[i].ss;
                    indexblocked=blocked[i].ff;
                }
                else{
                    if((blocked[i].ff-indexblocked)%2==(blocked[i].ss==rowblocked)){
                        rowblocked=-1;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
            }
            else{
                i++;
                if(rowblocked!=-1){
                    flag=false;
                    break;
                }
            }
        }
        if(rowblocked!=-1) flag=false;
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}