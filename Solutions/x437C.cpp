#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int costarr[n+1];
    for(int i=1;i<=n;i++){
        cin>>costarr[i];
    }
    int total=0;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        total+=min(costarr[x],costarr[y]);
    }
    cout<<total;
}