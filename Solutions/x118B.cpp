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
    int n;
    cin>>n;
    for(int i=0;i<n*2+1;i++){
        for(int j=0;j<2*abs(n-i);j++){
            cout<<" ";
        }
        for(int j=0;j<(n*2+1)-2*abs(n-i);j++){
            cout<<n-abs(n-i)-abs(abs(n-abs(n-i))-j)<<" \n"[j==(n*2+1)-2*abs(n-i)-1];
        }
        
    }
}