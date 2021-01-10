#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
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
        int arr[n],dp[n]={0};
        dp[n-1]=INT_MAX;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=n-2;i>=0;i--){
            dp[i]=min(dp[i+1],arr[i+1]);
        }
        int baddays=0;
        for(int i=0;i<n;i++){
            if(arr[i]>dp[i]){
                baddays++;
            }
        }
        cout<<baddays<<"\n";
    }   
}