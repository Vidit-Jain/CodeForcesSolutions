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
    int n,m,k;
    cin>>n>>m>>k;
    bool supply[n+1];
    for(int i=1;i<=n;i++){
        supply[i]=false;
    }
    int u[m+1],v[m+1],l[m+1];
    for(int i=1;i<=m;i++){
        cin>>u[i]>>v[i]>>l[i];
    }
    for(int i=1;i<=k;i++){
        int a;
        cin>>a;
        supply[a]=true;
    }
    int num=INT_MAX;
    for(int i=1;i<=m;i++){
        if(supply[u[i]]!=supply[v[i]]){
            num=min(num,l[i]);
        }
    }
    if(num==INT_MAX) cout<<-1;
    else cout<<num<<endl;

}