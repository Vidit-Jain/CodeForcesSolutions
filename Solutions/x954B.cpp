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
bool isEqual(string str,int x){
    for(int i=0;i<x;i++){
        if(str[i]!=str[i+x]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string str;
    cin>>n>>str;
    int highest=0;
    for(int i=n/2;i>=1;i--){
        if(isEqual(str,i)){
            highest=i;
            break;
        }
    }
    if(!highest){
        cout<<n<<"\n";
    }
    else{
        int ans=highest+1+n-(highest)*2;
        cout<<ans<<"\n";
    }
}