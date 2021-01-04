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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int arr2[n*m];
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                sum+=arr[i][j];
                arr2[i*m+j]=arr[i][j];
            }
        }
        sort(arr2,arr2+n*m);
        int turn=0;
        for(int i=0;i<n*m;i+=2){
            if(arr2[i]+arr2[i+1]>0) break;
            turn+=arr2[i]+arr2[i+1];
        }
        cout<<sum-2*turn<<"\n";

    }
}