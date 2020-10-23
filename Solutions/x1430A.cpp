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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[3]={0};
        while(n>0){
            if(n%5!=0 && n%7!=0){
                n-=3;
                a[0]++;
            }
            else if(n%5==0){
                a[1]=n/5;
                n=0;
            }
            else if(n%7==0){
                a[2]=n/7;
                n=0;
            }
        }
        if(n<0) cout<<"-1\n";
        else cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
    }
}