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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n],b[n];
    vector<ll> diff;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        cin>>b[i];
        diff.push_back(a[i]-b[i]);
    }
    sort(diff.begin(),diff.end());
    ll total=0;
    for(int i=0;i<n;i++){
        auto s=lower_bound(diff.begin()+i+1,diff.end(),1-diff[i]);
        total+=(ll)(diff.end()-s);
    }
    cout<<total<<"\n";

}