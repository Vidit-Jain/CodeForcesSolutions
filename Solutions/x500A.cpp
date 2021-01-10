#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i,t;
    cin>>n>>t;
    int arr[n];
    rep1(i,n) cin>>arr[i];
    for(i=1;i<t;){
        i=i+arr[i];
        if(i==t) break;
    }
    if(i==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}