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
        int n,k;
        cin>>n>>k;
        if(k>=n) cout<<"1\n";
        else{
            int lowest=n;
            for(int i=1;i<=min(sqrt(n),(double)k);i++){
                if(n%i==0){
                    lowest=min(lowest,n/i);
                    if(n/i<=k){
                        lowest=min(lowest,i);
                    }
                }
            }
            cout<<lowest<<"\n";

        }
    }
}