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
        int sum=0;
        for(int i=0;i<n;i++){
             cin>>arr[i];
             sum+=arr[i];
        }
        if(sum%x!=0) cout<<n<<"\n";
        else{
                int a=n,b=-1;
                for(int i=0;i<n;i++){
                    if(arr[i]%x!=0){
                        a=i;
                        break;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(arr[i]%x!=0){
                        b=i;
                        break;
                    }
                }
                if(a==n && b==-1) cout<<"-1\n";
                else if(a==n){
                    cout<<b<<"\n";
                }
                else if(b==-1){
                    cout<<n-1-a<<"\n";   
                }
                else{
                    if(a<n-1-b){
                        cout<<n-1-a<<"\n";
                    }
                    else cout<<b<<"\n";
                }
            }
        }

    }
