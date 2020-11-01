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
    bool a[n+1];
    for(int i=0;i<=n;i++) a[i]=false;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x]=true;
        a[y]=true;
    }
    int v=-1;
    for(int i=1;i<=n;i++){
        if(!a[i]){
            v=i;
            break;
        }
    }
    cout<<n-1<<"\n";
    for(int i=1;i<=n;i++){
        if(i==v) continue;
        cout<<i<<" "<<v<<"\n";
    }
}