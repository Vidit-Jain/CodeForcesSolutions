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
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    char BG[2]={'B','G'};
    int num[2];
    cin>>num[0]>>num[1];
    int x=(num[0]<num[1]);
    while(num[0] || num[1]){
        cout<<BG[x];
        num[x]--;
        if(num[1-x]>0) x=1-x;
    }
    cout<<"\n";
}