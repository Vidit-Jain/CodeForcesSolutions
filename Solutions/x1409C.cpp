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
        int n,a,b;
        cin>>n>>a>>b;
        int gd=(b-a)/n;
        int repeater=-1;
        for(int i=gd+1;i<=(b-a);i++){
            if((b-a)%i==0){
                repeater=i;
                break;
            }
        }
        // cout<<"alsdkfj "<<repeater<<"\n";
        
        int multiplier=0;
        while(b-multiplier*repeater>0 && n!=multiplier){
            cout<<b-multiplier*repeater<<" ";
            multiplier++;
        }
        n-=multiplier;
        for(int i=1;i<=n;i++){
            cout<<b+repeater*i<<" ";
        }
        cout<<"\n";
        
    }
}