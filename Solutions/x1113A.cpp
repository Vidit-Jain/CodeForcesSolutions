#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    if(v>=n-1) cout<<n-1<<endl;
    else{
        int cost=v;
        for(int i=2;i<=n;i++){
            cost+=i;
            if(n-i==v) break;
        }
        cout<<cost<<endl;
    }
}