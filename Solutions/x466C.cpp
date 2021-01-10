#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    ll arr[n],sum[n],reversesum[n],dp[n],total=0,ways=0;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
        total+=arr[i];
    }

 


    if(total%3==0){
        sum[0]=arr[0];
        reversesum[n-1]=arr[n-1];

        for(int i=1;i<n;i++) sum[i]=sum[i-1]+arr[i];
        for(int i=n-2;i>=0;i--) reversesum[i]=reversesum[i+1]+arr[i];


        if(arr[n-1]==total/3)
            dp[n-1]=1;
        else dp[n-1]=0;

        for(int i=n-2;i>=0;i--){
            dp[i]=dp[i+1];
            if(reversesum[i]==total/3) dp[i]++;
        }   
        
        for(int i=0;i<n-2;i++)
            if(sum[i]==total/3) ways+=dp[i+2];
            
        
    }
    cout<<ways<<endl;
}