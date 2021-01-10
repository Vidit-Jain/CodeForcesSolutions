#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
bool comparePrice(const pair<int,int> &a,const pair<int,int> &b){
    return a.first<b.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector< pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comparePrice);
    int maxquality=-1;
    int flag=1;
    for(int i=1;i<n;i++){
        if(v[i].second<v[i-1].second && v[i].first!=v[i-1].first){
            flag=0;
            break;
        }
    }
    if(flag==0) cout<<"Happy Alex";
    else cout<<"Poor Alex";
    
}