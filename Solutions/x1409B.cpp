#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
            ll afirst=max(a-n,x)*max(b-(n-(a-max(a-n,x))),y);
            ll bfirst=max(b-n,y)*max(a-(n-(b-max(b-n,y))),x);
            cout<<min(afirst,bfirst)<<"\n";
        
    }
}