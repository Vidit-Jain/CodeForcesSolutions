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
string createString(ll n,ll firstbpos,ll lastbpos){
    string str="";
    for(int i=0;i<n;i++){
        if(i==firstbpos || i==lastbpos) str+='b';
        else str+='a';
    }
    return str;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll x=0;
        while((x)*(x+1)/2<k){
            x++;
        }
        ll firstbpos=n-x-1;
        k-=x*(x-1)/2;
        ll lastbpos=n-k;
        cout<<createString(n,firstbpos,lastbpos)<<"\n";
    }
}