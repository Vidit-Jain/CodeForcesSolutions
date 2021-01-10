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
        int arr[2*n];
        int arrevenindex[2*n],arroddindex[2*n];
        int a=0,b=0;
        int eo[2]={0};
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            eo[arr[i]%2]++;
            if(arr[i]%2==0){
                arrevenindex[a]=i+1;
                a++;
            }
            else{
                arroddindex[b]=i+1;
                b++;
            }
        }
        a--;
        b--;
        
        if(eo[1]%2==1){
            
            eo[1]--;
            eo[0]--;
        }
        else if(eo[1]>=2){
            
            eo[1]-=2;
        }
        else {
            
            eo[0]-=2;
        }
        for(int i=0;i<min(a,eo[0]);i+=2){
            cout<<arrevenindex[i]<<" "<<arrevenindex[i+1]<<"\n";
        }
        for(int i=0;i<min(b,eo[1]);i+=2){
            cout<<arroddindex[i]<<" "<<arroddindex[i+1]<<"\n";
        }
    }
}
