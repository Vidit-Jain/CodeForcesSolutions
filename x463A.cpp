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
    int n,s;
    cin>>n>>s;
    s*=100;
    int num[n];
    int highestsweets=-1;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        num[i]=a*100+b;
        if(s>=num[i]){
            highestsweets=max(highestsweets,(num[i]%100!=0)?(100-(num[i]%100)):0);
        }
    }
    cout<<highestsweets<<"\n";
}