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
int something (string str,int n,int k) {
    int deletions=0;
    int zeros=0;
    for(int i=n-1;i>=0;i--){
        if(str[i]=='0') zeros++;
        else deletions++;
        if(zeros>=k) return deletions;
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    ll k;
    cin>>str>>k;
    int n=str.size();
    int nonzero=0;  
    for(int i=0;i<str.size();i++){
        if(ctoi(str[i])!=0){
            nonzero++;
        }
    }
    if(n-nonzero>=k) cout<<something(str,n,k)<<"\n";
    else cout<<n-1<<"\n";
}