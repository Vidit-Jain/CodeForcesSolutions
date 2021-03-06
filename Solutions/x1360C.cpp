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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int onediff=0;
        int parity[2]={0,0};
        sort(arr,arr+n);
        parity[arr[0]%2]++;
        for(int i=1;i<n;i++){
            parity[arr[i]%2]++;
            if(arr[i]-arr[i-1]==1) onediff++;
        }
        if((parity[0]%2==0 && parity[1]%2==0) || onediff!=0) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    
}