#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long n,k;
        cin>>n>>k;
        int flag=0;
        if((n-k)%2==0) flag=1;
        if(pow(k,2)>n) flag=0;
        cout<<(flag==1?"YES":"NO")<<"\n";
    }
    
}