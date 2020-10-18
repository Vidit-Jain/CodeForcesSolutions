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
    int n;
    cin>>n;
    int apos[n+1],bpos[n+1];
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        apos[num]=n+i+1;
    }
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        bpos[num]=i+1;
    }
    int diff[n],count[n];
    for(int i=0;i<n;i++) diff[i]=(apos[i+1]-bpos[i+1])%n;
    for(int i=0;i<n;i++) count[i]=0;
    for(int i=0;i<n;i++){
        count[diff[i]]++;
    }
    int highest=-1;
    for(int i=0;i<n;i++){
        highest=max(highest,count[i]);
    }

    cout<<highest<<"\n";
}