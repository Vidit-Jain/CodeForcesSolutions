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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int grid[n][m];
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                int count=4;
                if(i==0 || i==n-1)count--;
                if(j==0 || j==m-1)count--;
                if(grid[i][j]>count)flag=1;
                grid[i][j]=count;
            }
        }
        if(flag) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<"\n";
            }
        }


    }
}