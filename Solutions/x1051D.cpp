#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    ll dp[n+4][2*n+4][2];
    for(int i=0;i<=n;i++){
        dp[i][0][0]=dp[i][0][1]=0;
    }
    for(int i=0;i<=2*n;i++){
        dp[0][i][0]=dp[0][i][1]=0;
    }
    dp[1][1][0]=2;
    dp[1][1][1]=0;
    dp[1][2][0]=0;
    dp[1][2][1]=2;
    for(int i=3;i<=2*n;i++){
        dp[1][i][0]=dp[1][i][1]=0;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=2*i;j++){
            dp[i][j][0]=dp[i-1][j][0]+2*dp[i-1][j][1]+dp[i-1][j-1][0];
            dp[i][j][1]=((j>=2)?dp[i-1][j-2][1]:0)+2*dp[i-1][j-1][0]+dp[i-1][j][1];
            dp[i][j][0]%=998244353;
            dp[i][j][1]%=998244353;
        }
        for(int j=2*i+1;j<=2*n;j++) dp[i][j][0]=dp[i][j][1]=0;
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=2*n;j++){
    //         cout<<dp[i][j][0]+dp[i][j][1]<<" \n"[j==2*n];
    //     }
    // }
    cout<<(dp[n][k][0]+dp[n][k][1])%998244353<<"\n";
}