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
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll dp[n][2];
        dp[n-1][0]=arr[n-1];
        dp[n-2][0]=arr[n-2];
        dp[n-1][1]=0;
        dp[n-2][1]=0;
        for(int i=n-3;i>=0;i--){
           dp[i][0]=arr[i]+min(dp[i+1][1],arr[i+1]+dp[i+2][1]);
           dp[i][1]=min(dp[i+1][0],dp[i+2][0]);
        }
        cout<<dp[0][0]<<"\n";
    }
}