#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int j=1,minsum=0,currsum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        currsum+=arr[i];
    }
    minsum=currsum;
    
    for(int i=k;i<n;i++){
        currsum=currsum-arr[i-k]+arr[i];
        if(currsum<minsum){
            j=i-k+2;
            minsum=currsum;
        }
    }
    cout<<j<<endl;
}