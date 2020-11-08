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
    int k;
    string str;
    cin>>k>>str;
    int alpha[26]={0};
    for(int i=0;i<str.size();i++){
        alpha[str[i]-'a']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        flag=flag && (alpha[i]%k==0);
    }
    if(flag){
            string s="";
            for(int i=0;i<26;i++){
                for(int j=0;j<alpha[i]/k;j++){
                    s=s+(char)(i+'a');
                }
            }
            string f="";
            for(int i=0;i<k;i++) cout<<s;
            cout<<"\n";
    }
    else cout<<"-1\n";

}