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
        int n,x;
        cin>>n>>x;
        int arr[n];
        int eo[2]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            eo[arr[i]%2]++;
        }
        if(eo[1]==0) cout<<"No\n";
        else{
            eo[1]--;
            x--;
            int a=min((eo[1]/2)*2,(x/2)*2);
            eo[1]-=a;
            x-=a;
            if(eo[0]>=x) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}