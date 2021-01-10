#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) (int)a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        string s;
        int x;
        cin>>s>>x;
        int n=s.size();
        string w(n,'1');
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(i-x>=0)
                    w[i-x]='0';
                if(i+x<n)
                    w[i+x]='0';
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            bool one=false;
            one= one || (i-x>=0  && w[i-x]=='1');
            one= one || (i+x<n && w[i+x]=='1');
            if(s[i]!=itoc(one)){

                flag=false;
                break;
            }
        }
        if(flag) cout<<w<<"\n";
        else cout<<"-1\n";
        
    }
}