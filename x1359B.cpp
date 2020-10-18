#include <bits/stdc++.h>
using namespace std;
#define lsb(x) (x&(-x))
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) ((int)a-48)
#define itoc(a) (a+'0')
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        ll total=0;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            int count=0;
            for(int j=0;j<m;j++){
                if(str[j]=='*'){
                    total+=min(count*x,(count%2)*x+(count/2)*y);
                    count=0;
                } else count++;
            }
            total+=min(count*x,(count%2)*x+(count/2)*y);
        }
        cout<<total<<"\n";
    }
}