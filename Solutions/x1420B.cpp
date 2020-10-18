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
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[35]={0};
        for(ll i=0;i<n;i++){
            double a;
            cin>>a;
            ll x=floor(log2(a));
            arr[x]++;
        }
        ll total=0;
        for(ll i : arr){

            total+=i*(i-1)/2;
        }
        cout<<total<<"\n";
    }
}