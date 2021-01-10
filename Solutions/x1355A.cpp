#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
ll maxDigit(ll a){
    ll maxd=0;
    while(a!=0){
        maxd=max(maxd,a%10);
        a/=10;
    }
    return maxd;
}
ll minDigit(ll a){
    ll mind=9;
    while(a!=0){
        mind=min(mind,a%10);
        a/=10;
    }
    return mind;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,k;
        cin>>a>>k;
        k-=1;
        while(k!=0 && minDigit(a)!=0){
            a+=maxDigit(a)*minDigit(a);
            k--;
        }
        cout<<a<<"\n";
    }
}