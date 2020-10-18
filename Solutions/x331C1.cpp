#include <bits/stdc++.h>
using namespace std;
#define lsb(x) (x&(-x))
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) ((int)a-48)
#define itoc(a) (a+'0')
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
ll maxDigit(ll n){
    ll highest=0;
    while(n!=0){
        highest=max(highest,n%10);
        n/=10;
    }
    return highest;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    int count=0;
    while(n!=0){
        n-=maxDigit(n);
        count++;
    }
    cout<<count<<"\n";
}