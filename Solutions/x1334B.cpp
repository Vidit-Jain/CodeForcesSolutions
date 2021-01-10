#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,i;
        cin>>n>>x;
        ll arr[2*n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll length=0;
        for(i=n-1;i>=0;i--){
            if(i==n-1) arr[i+n]=arr[i];
            else  arr[i+n]=arr[i+1+n]+arr[i];

            if(arr[i+n]/(length+1)<x) break;
            length++;
        }
        cout<<length<<endl;

    }
    return 0;
}
