#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define REP(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define MAX(a,b,c) max(a,max(b,c))
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i;
    ll n;
    cin>>n;
    int coord[n],height[n];
    int dp[n][3];
    rep(i,n)    cin>>coord[i]>>height[i];
    if(n==1) cout<<1<<endl;
    else{
    dp[0][0]=0;
    dp[0][1]=1;
    if(coord[0]+height[0]<coord[1])dp[0][2]=1;
    else dp[0][2]=0;
    REP(i,1,n-1){
        dp[i][0]=MAX(dp[i-1][0],dp[i-1][1],dp[i-1][2]);
        if(coord[i]-height[i]>coord[i-1]){
            dp[i][1]=max(dp[i-1][0]+1,dp[i-1][1]+1);
            if(coord[i-1]+height[i-1]<coord[i]-height[i]){
                dp[i][1]=max(dp[i][1],dp[i-1][2]+1);
            }
        }
        else dp[i][1]=0;
        if(coord[i]+height[i]<coord[i+1]){
            dp[i][2]=dp[i][0]+1;
        }
        else dp[i][2]=0;
    }
    dp[n-1][0]=MAX(dp[n-2][0],dp[n-2][1],dp[n-2][2]);
    
    if(coord[n-1]-height[n-1]>coord[n-2]){
        dp[n-1][1]=max(dp[n-2][0]+1,dp[n-2][1]+1);
        if(coord[n-2]+height[n-2]<coord[n-1]-height[n-1]){
            dp[n-1][1]=max(dp[n-1][1],dp[n-2][2]+1);
        }
    }else dp[n-1][1]=0;
    dp[n-1][2]=dp[n-1][0]+1;
    cout<<max(dp[n-1][2],dp[n-1][1])<<endl;
    }   
    
}
