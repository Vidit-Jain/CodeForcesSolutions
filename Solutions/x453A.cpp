#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
double part1(ll m,ll n){
    double total = 0;
    for(int i=1;i<=m;i++){
        total += i*pow(((double)i/m),n);
    }
    return total;
}
double part2(ll m,ll n){
    double total = 0;
    for(int i=1;i<=m;i++){
        total += i*pow((double)(i-1)/m,n);
    }
    return total;
}
double ans(ll m,ll n){
    return part1(m,n)-part2(m,n);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll m,n;
    cin>>m>>n;
    cout<<ans(m,n)<<"\n";
}