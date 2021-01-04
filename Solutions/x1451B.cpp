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
        int n,q;
        string str;
        cin >> n >> q >> str;
        for(int x=0;x<q;x++){
            int l,r;
            bool flag=false;
            cin >> l >> r;
            l--;r--;
            for(int i=0;i<l;i++){
                flag = flag || (str[i]==str[l]);
            }
            for(int i=n-1;i>r;i--){
                flag = flag || (str[i]==str[r]);
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}


















































