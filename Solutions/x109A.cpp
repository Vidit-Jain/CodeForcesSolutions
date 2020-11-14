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
    int count4=0,count7=0;
    while(n%7!=0){
        if(n<4) {
            count4=-1;
            break;
        }
        count4++;
        n-=4;
    }
    count7=n/7;
    if(count4==-1) cout<<"-1";
    else{
    for(int i=0;i<count4;i++) cout<<"4";
    for(int i=0;i<count7;i++) cout<<"7";
    }
    cout<<"\n";
}