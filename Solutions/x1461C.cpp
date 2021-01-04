#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            arr[i]--;
        }
        int x=n;
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=i){
                x=i;
                break;
            }
        }
        double p=1;
        for(int i=0;i<m;i++){
            int a;
            double b;
            cin>>a>>b;
            a--;
            if(a>=x){
                p*=((double)1.0-b);
            }
        }
        p=1-p;
        if(x==n) p=1;
        cout<<p<<"\n";
    }
}