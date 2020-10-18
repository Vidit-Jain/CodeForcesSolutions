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
ll getRangeSum(ll prefixsum[],ll i,ll j){
    return prefixsum[j]-prefixsum[i-1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    ll lastindex=1,currindex=1;
    ll prefixsum[n+1];
    prefixsum[0]=0;

    for(int i=1;i<=n;i++){
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    ll highest=0;

    while(currindex <= n){
        if(lastindex>currindex) currindex=lastindex;
        if(getRangeSum(prefixsum,lastindex,currindex)>t){
            lastindex++;
        } else {
            highest=max(highest,currindex-lastindex+1);
            currindex++;
        }
    }
    cout<<highest<<"\n";
}