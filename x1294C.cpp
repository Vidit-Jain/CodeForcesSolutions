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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=-1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                a=i;
                break;
            }
        }
        if(a!=-1){
            int b=-1;
            for(int i=a+1;i<=sqrt(n);i++){
                if((n/a)%i==0){
                    b=i;
                    if(a!=b && a!=(n/(a*b)) && b!=(n/(a*b)))break;
                    else b=-1;
                }
            }
            if(b!=-1) cout<<"YES\n"<<a<<" "<<b<<" "<<n/(a*b)<<"\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}