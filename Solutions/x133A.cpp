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
    string str;
    cin>>str;
    bool flag=false;
    for(int i=0;i<str.size();i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9') flag=true;
    }  
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}