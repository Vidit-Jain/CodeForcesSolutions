#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
#define vpair(a,b) vector<pair<a,b>>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=-1,b=-1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                a=i-1;
                b=i;
            }
        }
        if(a==-1 && b==-1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                if(arr[a]==arr[i]){
                     cout<<i+1<<" "<<b+1<<"\n";
                }
                else if(i!=b) cout<<i+1<<" "<<a+1<<"\n";
            }
        }
    }
}