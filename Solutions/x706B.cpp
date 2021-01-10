#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>q;
    int m[q];
    for(int i=0;i<q;i++){
        cin>>m[i];
    }
    sort(x,x+n);
    int maxcoins=-1;
    for(int i=0;i<q;i++){
        maxcoins=max(maxcoins,m[i]);
    }
    int index=0;
    int dp[100001];
    dp[0]=0;
    for(int i=1;i<=100001;i++){
        dp[i]=dp[i-1];
        while(index!=n && i>=x[index]){
            dp[i]++;
            index++;
        }
    }

     for(int i=0;i<q;i++){
        if(m[i]>100000) cout<<dp[100000]<<endl;
        else cout<<dp[m[i]]<<endl;
    }
    
}