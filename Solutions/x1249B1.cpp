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
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int p[n+1];
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        for(int i=1;i<=n;i++){
            int total=1;
            int temp=i;
        while(i!=p[temp]){
            temp=p[temp];
            total++;
        }
        cout<<total<<" ";
        }
        cout<<"\n";
    }
}  