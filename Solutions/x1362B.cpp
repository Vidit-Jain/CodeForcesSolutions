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
bool equalArrays(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool checkXOR(int arr[],int n,int index){
    int newarr[n];
    for(int i=0;i<n;i++){
        newarr[i]=arr[i]^index;
    }
    sort(newarr,newarr+n);

    return equalArrays(arr,newarr,n);
}
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
        sort(arr,arr+n);
        int ans=-1;
        for(int i=1;i<=1024;i++){
                
            if(checkXOR(arr,n,i)){
                ans=i;
                break;
            }
        }    
        cout<<ans<<"\n";
    }
}