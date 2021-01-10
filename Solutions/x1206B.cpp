#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,total=0;
    ll negative=0,positive=0,zeros=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            total+=abs(-1-arr[i]);
            negative++;
        }
        else if(arr[i]>0){
            total+=abs(arr[i]-1);
            positive++;
        }
        else zeros++;

    }
    total+=zeros;
    if(negative%2!=0 && zeros==0){
        total+=2;
    }
    cout<<total;
}