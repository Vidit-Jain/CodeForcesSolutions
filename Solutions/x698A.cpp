#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define ll long long
#define max3(a,b,c) max(a,max(b,c))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    int arr[n],dp[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dp[0][0]=0;
    if(arr[0]==2 || arr[0]==3)
    dp[0][2]=1;
    else dp[0][2]=0;
    if(arr[0]==1 || arr[0]==3)
    dp[0][1]=1;
    else dp[0][1]=0;
    for(int i=1;i<n;i++){
        dp[i][0]=max3(dp[i-1][0],dp[i-1][1],dp[i-1][2]);
        if(arr[i]==2 || arr[i]==3)
            dp[i][2]=max(dp[i-1][0]+1,dp[i-1][1]+1);
        else dp[i][2]=0;
        if(arr[i]==1 || arr[i]==3)
            dp[i][1]=max(dp[i-1][0]+1,dp[i-1][2]+1);
        else dp[i][1]=0;
    }
    
    cout<<n-max3(dp[n-1][0],dp[n-1][1],dp[n-1][2]);
}