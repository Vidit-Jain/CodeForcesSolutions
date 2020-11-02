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
    int up=0,down=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z') up++;
        if(str[i]>='a' && str[i]<='z') down++;
    }
    if(up>down){
        touppercase(str);
    }
    else tolowercase(str);
    cout<<str<<"\n";
}