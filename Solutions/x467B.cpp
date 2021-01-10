#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int howmanybits(long n){
    long a=1;
    int count=0;
    while(a<pow(2,20)){
        if((n&a)!=0) count++;
        a*=2;
    }
    return count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long n,m,k;
    cin>>n>>m>>k;
    long arr[m];
    long fedor;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cin>>fedor;
    int totalfriends=0;
    for(int i=0;i<m;i++){
        if(howmanybits(fedor ^ arr[i])<=k) totalfriends++;
    }
    cout<<totalfriends;
}