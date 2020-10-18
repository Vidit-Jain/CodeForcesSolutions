#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
ll findrepeatingsum(ll m){
    m=m%10;
    ll repeatingsum=0;
    for(int i=1;i<=10;i++){
        repeatingsum+=(m*i)%10;
    }
    return repeatingsum;
}
ll findrepeatingsum(ll m,ll l){
    ll repeatingsum=0;
    m%=10;
    for(int i=1;i<=l;i++) {
        repeatingsum += (m * i) % 10;
    }
    return repeatingsum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll repeatingsum=findrepeatingsum(m);
        ll eligiblepages=n/m;
        ll totalsum=eligiblepages/10*repeatingsum;
        totalsum+=findrepeatingsum(m,(eligiblepages%10));
        cout<<totalsum<<"\n";

    }
}