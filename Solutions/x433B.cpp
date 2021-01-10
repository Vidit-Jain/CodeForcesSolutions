#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,i;
    cin>>n;
    ll arr[n+1],arrsorted[n+1],dp[n+1],dpsorted[n+1];

    arr[0]=arrsorted[0]=0;
    rep1(i,n+1) {
        cin>>arr[i];
        arrsorted[i]=arr[i];
    }
    dp[0]=0;
    dpsorted[0]=0;
    sort(arrsorted+1,arrsorted+n+1);
    
    dp[0]=0;
    dpsorted[0]=0;
    for(i=1;i<=n;i++){
        dp[i]=dp[i-1]+arr[i];
        dpsorted[i]=dpsorted[i-1]+arrsorted[i];
    }
    int m;
    cin>>m;
    while(m--){
        int l,r,type;
        cin>>type>>l>>r;
        if(type==1)
            cout<<dp[r]-dp[l-1]<<endl;
        else cout<<dpsorted[r]-dpsorted[l-1]<<endl;
    }
}