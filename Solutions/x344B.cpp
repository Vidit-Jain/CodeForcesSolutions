#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(a>sum/2.0 || b>sum/2.0 || c>sum/2.0 || sum<=3){
        cout<<"Impossible\n";
    }
    else{
        bool flag=true;
        for(int i=0;i<=a;i++){
            if(b+a-2*i==c){
                cout<<i<<" "<<b-i<<" "<<a-i<<"\n";
                flag=false;
                break;
            }
        }
        if(flag) cout<<"Impossible\n";
    }
}