#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll a[600009],burst;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i]>>a[i+n];
        }
        burst=max(a[0]-a[2*n-1],0ll);
        ll m=a[0]-burst;
        ll bullets=burst;
        for(i=1;i<n;i++){
            burst=max(a[i]-a[i-1+n],0ll);
            bullets+=burst;
            m=min(a[i]-burst,m);
        }
        bullets=bullets+m;
        cout<<bullets<<"\n";

    }
    return 0;
}
