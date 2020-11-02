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
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int required[26]={0}, available[26]={0};
    for(int i=0;i<str1.size();i++){
        required[str1[i]-'A']++;
    }
    for(int i=0;i<str2.size();i++){
        required[str2[i]-'A']++;
    }
    for(int i=0;i<str3.size();i++){
        available[str3[i]-'A']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(available[i]!=required[i]) flag=false;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}