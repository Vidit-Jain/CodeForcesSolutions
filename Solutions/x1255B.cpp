#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
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
        int arr[n],temp[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            temp[i]=arr[i];
        } 
        if(m<n || n==2) cout<<-1<<endl;
        else{
            
            int total=sum*2;
            int leastindex=0;
            for(int i=0;i<n;i++){
                if(arr[i]<arr[leastindex]){
                    leastindex=i;
                }
            }
            int secondleastindex=(leastindex==0)?1:0;
            for(int i=secondleastindex;i<n;i++){
                if(arr[i]<=arr[secondleastindex]){
                    if(i!=leastindex)
                        secondleastindex=i;
                }
            }
            total+=(m-n)*(arr[leastindex]+arr[secondleastindex]);
            cout<<total<<endl;
            for(int i=1;i<=n;i++){
                cout<<i<<" "<<((i+1>n)?1:i+1)<<endl;
            }
            for(int i=0;i<m-n;i++){
                cout<<leastindex+1<<" "<<secondleastindex+1<<endl;
            }
        }
    }
}