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
        int a[n],b[n],diff[n];
        bool negative[n]={false};
        bool positive[n]={false};
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0) continue;
            negative[i]=negative[i-1] || (a[i-1]==-1);
            positive[i]=positive[i-1] || (a[i-1]==1);
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
            diff[i]=b[i]-a[i];

        }
        int flag=1;
        for(int i=0;i<n;i++){
            if((diff[i]>0 && positive[i]==0) || (diff[i]<0 && negative[i]==0)){
                flag=0;
                break;
            }
        }
        cout<<(flag==1?"YES\n":"NO\n");

    }
    
}