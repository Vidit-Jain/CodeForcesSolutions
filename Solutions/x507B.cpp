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
    double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double distance=sqrt(pow(y1-y,2)+pow(x1-x,2));
    double ans=ceil(distance/(r*2));
    cout<<(ll)ans<<"\n";
}