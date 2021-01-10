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
    int n;
    cin>>n;
    int a[2],b[2],c[2];
    int bid[2],cid[2];
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];
    if(b[0]>a[0]) bid[0]=1;
    else bid[0]=-1;
    if(b[1]>a[1]) bid[1]=1;
    else bid[1]=-1;
    if(c[0]>a[0]) cid[0]=1;
    else cid[0]=-1;
    if(c[1]>a[1]) cid[1]=1;
    else cid[1]=-1;
    if(cid[0]==bid[0] && cid[1]==bid[1]) cout<<"YES";
    else cout<<"NO";
}
