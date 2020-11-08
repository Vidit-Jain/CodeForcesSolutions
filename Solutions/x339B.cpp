#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
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
    int n,m;
    cin>>n>>m;
    ll curr=1;
    ll total=0;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x>=curr){
            total+=x-curr;
            curr=x;
        }
        else{
            total+=n-(curr-x);
            curr=x;
        }
    }
    cout<<total<<"\n";
}