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
        int n,p;
        cin>>n>>p;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flip=0;
        ll total=0;
        ll highest=0;
        for(int i=0;i<n-1;i++){
            if(!flip){
                highest=max(highest,arr[i]);
                if(arr[i]>arr[i+1]){
                    total+=arr[i];
                    flip=1;
                    highest=0;
                }
            }
            else{
                if(arr[i]<arr[i+1]){
                    total-=arr[i];
                    flip=0;
                }
            }
        }
        if(!flip) total+=max(highest,arr[n-1]);
        cout<<total<<"\n";
    }
}