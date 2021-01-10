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
    int n,d;
    cin>>n>>d;
    string g;
    cin>>g;
    int total=0;
    for(int i=0;i!=n-1;){
        int lastindex=-1;
        for(int j=1;j<=d;j++){
            if(i+j<n && g.at(i+j)=='1')
                lastindex=j;
            
        }
        if(lastindex==-1) {
            total=-1;
            break;
        }
        i+=lastindex;
        total++;
    }
    cout<<total;
}