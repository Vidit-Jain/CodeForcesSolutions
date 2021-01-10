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
        int flag=0;
        int currpos=n-1;
        for(int i=n-1;i>=1;i--){
            
            if(flag==0){
                if(arr[i]>arr[i-1]){
                    flag=1;
                    continue;
                }
            }
            if(flag==1){
                currpos=i;
                if(arr[i]<arr[i-1]){
                    flag=2;
                    break;
                }
            }
        }
        if(flag!=2) cout<<"0\n";
        else cout<<currpos<<"\n";
    }
}