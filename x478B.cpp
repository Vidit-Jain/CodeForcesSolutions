#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
ll nCrPower(ll cleansize,ll cleancount){
    return cleancount*(cleansize-1)*cleansize/2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll least=0,most=0;
    ll cleansize,cleancount,dirtycount;
    cleansize=n/m;
    dirtycount=n%m;
    cleancount=m-dirtycount;
    least=nCrPower(cleansize,cleancount)+nCrPower(cleansize+1,dirtycount);
    most=nCrPower(n-(m-1),1);
    cout<<least<<" "<<most;
}