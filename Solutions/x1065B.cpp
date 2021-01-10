#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll minimum=max(n-2*m,0ll);
    ll maximum=INT_MIN;
    for(int i=0;i<=n;i++){
        if((ll)i*(i-1)/2>=m){
            maximum=n-i;
            break;
        }
    }
    cout<<minimum<<" "<<maximum;
}