#include <bits/stdc++.h>
using namespace std;
#define lsb(x) (x&(-x))
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) ((int)a-48)
#define itoc(a) (a+'0')
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll product=1,product2=1,product3=arr[n-1];
        for(int i=1;i<=5;i++) product*=(ll)arr[n-i];
        for(int i=1;i<=3;i++) product2*=(ll)arr[n-i];
        for(int i=0;i<4;i++) product3*=(ll)arr[i];
        product2*=(ll)(arr[0]*arr[1]);

        cout<<max(product,max(product2,product3))<<"\n";
    }

}