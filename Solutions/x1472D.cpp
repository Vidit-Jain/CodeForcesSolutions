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
        vi even,odd;
        for(int i=0;i<n;i++){
            ll x;
            cin >> x;
            if(x%2==0) even.pb(x);
            else odd.pb(x);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        reverse(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        ll i=0,j=0;
        ll alice=0,bob=0,turn=0;
        while(i<even.size() || j<odd.size()){
            if(j==odd.size() || (i<even.size() && even[i]>=odd[j])){
                if(turn==0){
                    alice+=even[i];
                }
                i++;
            }
            else if(i==even.size() || (j<odd.size() && even[i]<=odd[j])){
                if(turn==1){
                    bob+=odd[j];
                }
                j++;
            }
            turn = 1-turn;
        }
        if(alice>bob){
            cout<<"Alice\n";
        }
        else if(bob>alice){
            cout<<"Bob\n";
        }
        else cout<<"Tie\n";
    }
}