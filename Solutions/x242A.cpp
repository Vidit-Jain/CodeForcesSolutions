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
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    vector<pair<int,int>> v;
    for(int j=b;j<=y;j++){
        for(int i=max(j+1,a);i<=x;i++){
            v.push_back({i,j});
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<"\n";

    for(auto s:v){
        cout<<s.first<<" "<<s.second<<"\n";
    }
}