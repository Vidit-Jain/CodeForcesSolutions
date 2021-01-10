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
    int t;
    cin>>t;
    while(t--){
        int number,original;
        cin>>number;
        original=number;
        int curr=10;
        int count=0;
        list<int> a;
        while(number!=0){
            int n=number%curr;
            if(n!=0){
                a.push_back(n);
                count++;
            }
            number-=n;
            curr*=10;
        }
        cout<<count<<"\n";
        for(auto s: a){
            cout<<s<<" ";
        }
        cout<<"\n";
    }
}