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
        int r[n],b[n];
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            r[i]=s1[i]-48;
            b[i]=s2[i]-48;
        }
        int rwin=0,bwin=0;
        for(int i=0;i<n;i++){
            if(r[i]>b[i]){
                rwin++;
            }
            else if(b[i]>r[i])
            bwin++;
        }
        // DBG(bwin);
        // DBG(rwin);
        // // for(int i=0;i<3;i++){
        // //     cout<<b[i]<<" ";
        // // }
        // // cout<<"\n";
        if(rwin>bwin) cout<<"RED\n";
        else if(bwin>rwin) cout<<"BLUE\n";
        else cout<<"EQUAL\n";
	int somethingReallyLarge=5;

    }
}
