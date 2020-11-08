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
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    bool flag=true;
    for(auto x:v){
        if(s>x.first){
            s+=x.second;
        }
        else{ 
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}