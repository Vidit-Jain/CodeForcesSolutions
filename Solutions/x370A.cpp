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
    int r1,c1;
    int r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int rowdiff=abs(r1-r2);
    int columndiff=abs(c1-c2);
    int bishop=0;
    if((r1+c1)%2==(r2+c2)%2){
        if(rowdiff==columndiff) bishop=1;
        else bishop=2;
    }
    int rook=(rowdiff==0 || columndiff==0)?1:2;
    int king=min(rowdiff,columndiff)+abs(rowdiff-columndiff);
    cout<<rook<<" "<<bishop<<" "<<king<<endl;
}