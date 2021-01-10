#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
bool possible(int sum,int arr[],int n,int index){
    if(index==n){
        if(sum==0)
         return true;
        else return false;
    }
    return possible((sum+arr[index])%360,arr,n,index+1) || possible((sum - arr[index])%360,arr,n,index+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i;
    cin>>n;
    int arr[n];

    rep(i,n) cin>>arr[i];
    bool a=possible(0,arr,n,0);
    if(a) cout<<"YES";
    else cout<<"NO";
}