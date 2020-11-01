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
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int h[n];
        int flag=0;
        for(int i=0;i<n;i++) cin>>h[i];
        for(int i=0;i<n-1;i++){
            if(h[i]-h[i+1]>=-k){
                m+=h[i]-h[i+1]+min(k,h[i+1]);
            }
            else{
                m-=(h[i+1]-h[i]-k);
                if(m<0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    
}