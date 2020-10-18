#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll currsum=0;
        list<int> q;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum%2==1 && k>1){
                q.push_back(i+1);
                currsum=0;
                k--;
            }
        }
        if(currsum%2==1){
            q.push_back(n);
            cout<<"YES\n";
            for(auto s:q){
                cout<<s<<" ";
            }
            cout<<"\n";
        }
        else cout<<"NO\n";
    }
}