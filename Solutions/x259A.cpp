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
bool isAlternate(string str){
    for(int i=1;i<8;i++){
        if(str[i]==str[i-1]) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool flag=true;
    for(int i=0;i<8;i++){
        string str;
        cin>>str;
        if(!isAlternate(str)) flag=false;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}