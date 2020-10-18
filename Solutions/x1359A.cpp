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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int p=min(n/k,m);
        int q=(int)ceil((double)(m-p)/(k-1));
        cout<<p-q<<"\n";
    }
}