#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
void something(int &x,int &y){
    int gen=min(x,y);
    x-=gen;
    y-=gen;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a[3],b[3];
        cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
        int total=0;
        int gen=min(a[2],b[1]);
        total+=gen*2;
        a[2]-=gen;
        b[1]-=gen;
        something(a[0],b[2]);
        something(a[2],b[2]);
        something(a[1],b[0]);
        something(a[1],b[1]);
        gen=min(a[1],b[2]);
        total-=gen*2;
        cout<<total<<"\n";
    }
}