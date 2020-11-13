#include <bits/stdc++.h>
using namespace std;
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
    int n=str.size();
    int alpha[26]={0};
    int eo[2]={0};
    for(int i=0;i<n;i++){
        alpha[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        eo[alpha[i]%2]++;
    }
    int curr=0;
    int winner=-1;
    if(eo[1]==0 || eo[1]%2==1) cout<<"First\n";
    else cout<<"Second\n";
}