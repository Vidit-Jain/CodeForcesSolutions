#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int i,j;
    ll dp2[n+1][2];
    dp2[0][1]=0;
    rep(i,n+1){
        dp2[i][1]=0;
        dp2[i][0]=1;
    } 
    rep1(j,k){
        rep1(i,n+1){
            for(int num=i;num<=n;num+=i){
                dp2[num][1]+=dp2[i][0];
                dp2[num][1]%=MOD;
            }
            dp2[i][0]=dp2[i][1];
            dp2[i][1]=0;
        }
    }
    ll sum=0;
    rep1(i,n+1){
        sum+=dp2[i][0];
        sum%=MOD;
    }
    cout<<sum;
    
}