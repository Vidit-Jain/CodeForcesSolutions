#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int index1=0,index2=0;
    ll count=0;

    while(index1<=n-2){
        if(index2<n-1 && arr[index2+1]-arr[index1]<=d) index2++;
        else{
            ll x=index2-index1;
            count+=max(x*(x-1)/2,0ll);
            index1++;
        }
    }
    cout<<count<<"\n";
}