#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
bool compare(const pair<int,int> &v1,const pair<int,int> &v2){
    if(v1.first>v2.first) return true;
    else if(v1.first<v2.first) return false;
    else if(v1.second<v2.second) return true;
    else if(v1.second>v2.second) return false;
    else return false; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),compare);
    int p=v[k-1].first,t=v[k-1].second;
    int count=0;
    for(auto s:v){
        if(p==s.first && t==s.second)count++;
    }

    cout<<count<<"\n";
}