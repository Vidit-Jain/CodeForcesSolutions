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
bool isLucky(int n){
    while(n!=0){
        int x=n%10;
        if(x!=4 && x!=7) return false;
        n/=10;
    }
    return true;
}
bool isNearly(int n){
    for(int i=1;i<=n;i++){
        if((n%i==0) && isLucky(i)) return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<(isNearly(n)?"YES\n":"NO\n");
}