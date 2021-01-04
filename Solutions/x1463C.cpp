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
        cin >> n;
        ll t[n],x[n];
        for(int i=0;i<n;i++) cin>>t[i]>>x[i];
        ll index=0;
        ll prevcoord=0;
        ll success=0;
        while(index!=n){
            ll currcoord=x[index];
            ll currtime=t[index];
            ll dist=abs(currcoord-prevcoord);
            ll d1=(currcoord>prevcoord);
            index++;
            bool flag=true;
            while(index!=n){
                if(currtime+dist<=t[index]) break;
                flag=false;
                ll d2=(x[index]>prevcoord);
                ll dist2=abs(x[index]-prevcoord);
                if(d1==d2 && currtime+dist2>=t[index] && dist>=dist2){
                    if(index<n-1){
                        if(currtime+dist2<=t[index+1]){
                            success++;
                        }
                    }
                    else{
                        success++;
                    }
                }
                // if(currtime+dist==t[index]) break;
                index++;
            }
            if(flag) success++;
            prevcoord=currcoord;
        }
        cout<<success<<"\n";
    } 
}