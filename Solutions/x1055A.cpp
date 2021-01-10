#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,s,i;
    cin>>n>>s;
    int a[n],b[n];
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    if(a[0]==1){
        if(a[s-1]==1) cout<<"YES";
        else if(b[s-1]){
            bool flag=false;
            for(int i=s;i<n;i++){
                if(a[i]&&b[i]){
                    flag=true;
                    cout<<"YES";
                break;
                }
            }
            if(!flag) cout<<"NO";
        }
        else{
            cout<<"NO";
        }
    
    }
    else cout<<"NO";
    
}
