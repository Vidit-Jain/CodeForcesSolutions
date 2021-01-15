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
bool isMultiple(string common,string str){
    int n=str.size(),x=common.size();
    if(n%x!=0) return false;
    for(int i=0;i<n;i++){
        if(common[i%x]!=str[i]) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    tc{
        string str1,str2;
        cin>>str1>>str2;
        int n=str1.size(),m=str2.size();
        string best="-1";
        string common="";
        for(int i=0;i<min(n,m);i++){
            if(str1[i]==str2[i]){
                common=common+str1[i];
            }
            else break;
            if(isMultiple(common,str1) && isMultiple(common,str2)) best=common;
        }
        if(best.compare("-1")==0) cout<<"-1\n";
        else{
           int y=best.size(); 
           int q=(n*m)/(__gcd(n,m)*y);
           for(int i=0;i<q;i++) cout<<best;
           cout<<"\n";
        }
    }
}