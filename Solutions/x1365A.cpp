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
        int n,m;
        cin>>n>>m;
        int rows[n]={0};
        int columns[m]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int num;
                cin>>num;
                if(num==1){
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }
        int zerorows=0,zerocolumns=0;
        for(int i=0;i<n;i++){
            zerorows+=1-rows[i];
        }
        for(int i=0;i<m;i++){
            zerocolumns+=1-columns[i];
        }
        if(min(zerocolumns,zerorows)%2==1) cout<<"Ashish\n";
        else cout<<"Vivek\n";
    }
    
}