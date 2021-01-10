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
    int first[n+1];
    int last[n+1];
    int arr[n];
    for(int i=0;i<=n;i++){
        first[i]=INT_MAX;
        last[i]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        first[arr[i]]=min(first[arr[i]],i);
    }
    for(int i=n-1;i>=0;i--){
        last[arr[i]]=max(last[arr[i]],i);
    }
    int flag=0;
    for(int i=0;i<=n;i++){
        if(last[i]-first[i]>1 && first[i]!=INT_MAX && last[i]!=-1 ){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    }
}