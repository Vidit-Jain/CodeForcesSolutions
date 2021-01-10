#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        int dp[n+2][3];
        for(int i=0;i<=n;i++){
            for(int j=0;j<3;j++){
                dp[i][j]=-1000000;
            }
        }
        for(int i=1;i<=n;i++){
            dp[i][0]=dp[i-1][0];
            dp[i][1]=dp[i-1][1];
            dp[i][2]=dp[i-1][2];
            dp[i][ctoi(str[i-1])-1]=i;
        }
        int dp2[n+2][3];
        for(int i=0;i<=n+1;i++){
            for(int j=0;j<3;j++){
                dp2[i][j]=1000000;
            }
        }
        for(int i=n;i>=1;i--){
            dp2[i][0]=dp2[i+1][0];
            dp2[i][1]=dp2[i+1][1];
            dp2[i][2]=dp2[i+1][2];
            dp2[i][ctoi(str[i-1])-1]=i;
        }
        int minimumlength=INT_MAX;
        for(int i=1;i<=n;i++){
            if(str[i-1]=='1'){
                int tempmin=min(dp2[i][1]-dp[i][2],dp2[i][2]-dp[i][1])+1;
                minimumlength=min(minimumlength,tempmin);
            }
            else if(str[i-1]=='2'){
                int tempmin=min(dp2[i][2]-dp[i][0],dp2[i][0]-dp[i][2])+1;
                minimumlength=min(minimumlength,tempmin);
            }
            else if(str[i-1]=='3'){
                int tempmin=min(dp2[i][1]-dp[i][0],dp2[i][0]-dp[i][1])+1;
                minimumlength=min(minimumlength,tempmin);
            }
        }
        if(minimumlength>n) cout<<"0\n";
        else cout<<minimumlength<<"\n";
    }

    
}