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
        int n;
        cin >> n;
        int count[3]={0};
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            count[a]++;
        }
        if(count[2]%2==0 && count[1]%2==0){
            cout << "YES\n";
        }
        else if(count[2]%2==1){
            if(count[1]%2==0 && count[1]!=0) cout << "YES\n";
            else cout <<"NO\n";
        }
        else if(count[1]%2!=0){
            cout << "NO\n";
        }
    }
}