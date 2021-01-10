#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
bool isquasi(int n){
    while(n!=0){
        if(n%10!=0 && n%10!=1) return false;
        n/=10;
    }
    return true;
}
void generate(list<int> &sequence,int maxnum){
    for(int i=1;i<=maxnum;i++){
        if(isquasi(i)) sequence.push_back(i);
    }
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    
    int dp[n+1];
    int quasidp[n+1];
    quasidp[0]=-1;
    dp[0]=0;
    
    list<int> sequence;
    generate(sequence,n);
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
        for(auto quasis: sequence){
            
            if(quasis>i) break;
            if(dp[i]>1+dp[i-quasis]){
                dp[i]=1+dp[i-quasis];
                quasidp[i]=quasis;
            }
        }
    }
    cout<<dp[n]<<endl;
    int index=n;
    while(quasidp[index]!=-1){
        cout<<quasidp[index]<<" ";
        index-=quasidp[index];
    }

}
