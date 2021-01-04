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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arrn[n],arrm[m];
        for(int i=0;i<n;i++) cin>>arrn[i];
        for(int i=0;i<m;i++) cin>>arrm[i];
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arrn[i]==arrm[j]) count++;
            }
        }
        cout<<count<<"\n";
    }
}