#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll unsigned long long
ll compute(ll x) {
    ll sum = 0;
    ll count = 0;
    while (true) {
        ll n = pow((ll) 2, (count + 1)) - 1;
        sum += n * (n + 1) / 2;
        if (sum <= x) {
            count++;
        } else break;
    }
    return count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        cout<<compute(x)<<"\n";
    }
}