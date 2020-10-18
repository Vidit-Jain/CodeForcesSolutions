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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0];
    ll lowcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[0]) lowcount++;
        else break;
    }
    ll highcount=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==arr[n-1]) highcount++;
        else break;
    }

    ll ans=lowcount*highcount;
    if(diff==0){
        ans=(ll)n*(n-1)/2;
    }
    cout<<diff<<" "<<ans;

}