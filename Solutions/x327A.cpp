#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ones=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) ones++;
    }
    int maxcount=ones;
    int currcount=ones;
    for(int i=0;i<n;i++){
        if(arr[i]==1)currcount--;
        else currcount++;
        maxcount=max(currcount,maxcount);
        if(currcount<ones){
            currcount=ones;
        }
    }
    if(ones==n){
        maxcount--;
    }
    cout<<maxcount<<endl;

}