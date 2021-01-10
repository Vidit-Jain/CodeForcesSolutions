#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],dp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dp[i]=1;
    }
    int max_number=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            dp[i]=dp[i-1]+1;
            max_number=max(dp[i],max_number);
        }
    }
    cout<<max_number;

}