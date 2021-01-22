#include <bits/stdc++.h>
using namespace std;
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
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
/*DEBUGGING START*/
#define DBG(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr <<"[ "<< *it << " = " << a << " ]"<< endl;
    err(++it, args...);
}
template<typename T, typename... Args>
void DBGV(T a){
    cout<<"[ ";
    for(auto s:a) cout<<s<<", ";
    cout<<"]"<<endl;
}
template<typename T, typename... Args>
void DBGP(T a){
    cout<<"[ ";
    for(auto s:a) cout<<"("<<s.ff<<", "<<s.ss<<"), ";
    cout<<"]"<<endl;
}
/*DEBUGGING END*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    tc{
        ll n;
        string str;
        cin>>n>>str;
        ll prev=-1;
        string ans="";
        for(int i=0;i<n;i++){
            if((str[i]-'0')==1){
                if(prev!=2){
                    ans=ans+'1';
                    prev=2;
                }
                else{
                    ans=ans+'0';
                    prev=1;
                }
            }
            else{
                if(prev!=1){
                    ans=ans+'1';
                    prev=1;
                }
                else{
                    ans=ans+'0';
                    prev=0;
                }
            }
        }
        cout<<ans<<"\n";
    }
}