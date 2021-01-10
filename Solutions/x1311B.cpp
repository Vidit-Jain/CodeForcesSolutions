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
bool canSwap(int p[],int m,int index){
    for(int i=0;i<m;i++){
        if(p[i]==index) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n],p[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>p[i];
            p[i]--;
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                if(!canSwap(p,m,i)){
                    flag=1;
                    break;
                }
                else{
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    i=-1;
                }
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
}