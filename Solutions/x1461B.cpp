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
        string str[n];
        for(int i=0;i<n;i++) cin>>str[i];
        int dpleft[n][m],dpright[n][m];
        for(int i=0;i<n;i++) dpleft[i][0]=(str[i][0]=='*');
        for(int i=0;i<n;i++) dpright[i][m-1]=(str[i][m-1]=='*');
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                
                dpleft[i][j]=(str[i][j]=='*')?(dpleft[i][j-1]+1):0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=m-2;j>=0;j--){
                dpright[i][j]=(str[i][j]=='*')?(dpright[i][j+1]+1):0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i][j]=='*'){
                    count++;
                    for(int x=i+1;x<n;x++){
                        int degree=x-i+1;
                        if(dpleft[x][j]>=degree && dpright[x][j]>=degree) count++;
                        else break;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
}