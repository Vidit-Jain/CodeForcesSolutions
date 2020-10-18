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
int calculate(int a,int b){
    int total=0;
    if(a>b){
        int temp=min(b,a-b);
        a-=2*temp;
        b-=temp;
        total+=temp;
    }
    else if(b>a){
        int temp=min(a,b-a);
        a-=temp;
        b-=2*temp;

        total+=temp;
    }
    if(a!=0 && b!=0){
        int temp=a/3;
        a-=temp*3;
        b-=temp*3;
        total+=2*temp;
        if(a!=0 && b!=0 && (a>1 || b>1)){
            total++;
        }
    }
    return total;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<calculate(a,b)<<"\n";
}