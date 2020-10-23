#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
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
    int a[n],b[n];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) cin>>a[i];
    int bzeros=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(!b[i] && !a[i]) bzeros++;
        if(a[i])
            v.push_back({b[i]/(__gcd(b[i],a[i])),a[i]/(__gcd(b[i],a[i]))});
    }
    sort(v.begin(),v.end());
    int highest=!(v.size()==0);
    int curr=1;
    for(auto s=v.begin()+1;s<v.end();s++){
        pair<int,int> x=*s,y=*(s-1);
        if(x.first==y.first && x.second==y.second){
            curr++;
            highest=max(curr,highest);
        }
        else curr=1;
    }
    cout<<highest+bzeros<<"\n";
}