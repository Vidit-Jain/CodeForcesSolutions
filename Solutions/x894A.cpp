#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int dp[n],dpr[n];
    for(int i=0;i<n;i++){
        dp[i]=0;
        dpr[i]=0;
    }
    dp[0]=str.at(0)=='Q'?1:0;
    dpr[n-1]=str.at(n-1)=='Q'?1:0;
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1];
        if(str.at(i)=='Q')dp[i]+=1;
   
    }
    for(int i=n-2;i>=0;i--){
        dpr[i]=dpr[i+1];
        if(str.at(i)=='Q')dpr[i]+=1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(str.at(i)=='A')
            sum+=dp[i]*dpr[i];
    }
    cout<<sum<<endl;
}
