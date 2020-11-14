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
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
        flag=flag || a%2!=b%2;
    }
    if(sum1%2!=sum2%2) cout<<"-1\n";
    else if(sum1%2==0 && sum2%2==0) cout<<"0\n";
    else if(flag && n!=1) cout<<"1\n";
    else cout<<"-1\n";
    

}