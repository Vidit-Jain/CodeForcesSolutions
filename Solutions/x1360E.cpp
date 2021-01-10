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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int matrix[n][n];
        for(int i=0;i<n;i++){
            string row;
            cin>>row;
            for(int j=0;j<n;j++){
                matrix[i][j]=ctoi(row.at(j));
            }
        }
        int flag=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    if(matrix[i][j]==1){
                    if(!((i==n-1 || j==n-1) || (matrix[i+1][j]==1 || matrix[i][j+1]==1))){
                        flag=0;
                        break;
                    }
                    }
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}