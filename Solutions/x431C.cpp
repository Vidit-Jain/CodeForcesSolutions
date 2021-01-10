#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define MOD 1000000007
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,d;
    cin>>n>>k>>d;
    ll dpnotvalid[n+1],dpvalid[n+1];
    bool isvalid[n+1];
    dpnotvalid[0]=1;
    dpvalid[0]=0;
    for(int i=1;i<=n;i++){
        dpvalid[i]=0;
        dpnotvalid[i]=0;
        for(int j=1;j<=min(k,i);j++){
            if(j>=d){
                dpvalid[i]+=(dpnotvalid[i-j]+dpvalid[i-j]);
                dpvalid[i]%=MOD;
            }
            else{
                dpvalid[i]+=dpvalid[i-j];
                dpvalid[i]%=MOD;
                dpnotvalid[i]+=dpnotvalid[i-j];
                dpnotvalid[i]%=MOD;
            }
        }
    }
    cout<<dpvalid[n]<<endl;


}