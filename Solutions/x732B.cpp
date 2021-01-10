#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<n;i++){
        if(arr[i]+arr[i-1]<k){
            sum+=k-arr[i-1]-arr[i];
            arr[i]=k-arr[i-1];
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}