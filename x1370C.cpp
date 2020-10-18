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
bool highestOddDivisor(int n){
    if(n%2==1) return true;
    for(int i=3;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2==1 || (n/i)%2==1) return true;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    string names[]={"Ashishgup","FastestFinger"};
    while(t--){
        int n;
        cin>>n;
        if(n==2 || (highestOddDivisor(n) && n!=1)) cout<<names[0]<<"\n";
        else cout<<names[1]<<"\n";
    }
}