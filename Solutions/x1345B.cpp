#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
#define MAX 26000
int binarysearch(ll arr[],int n,int num){
    int start=0,end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(num>arr[mid]){
            start=mid+1;
            mid=(start+end)/2;
        }
        else if(num<arr[mid]){
            end=mid-1;
            mid=(start+end)/2;
        }
        else return mid;
    }
    if(num<arr[mid]) return mid+1;
    else return mid;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll dp[MAX];
    dp[0]=0;
    for(int i=1;i<MAX;i++){
        dp[i]=dp[i-1]+3*i-1;

    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count=0;
        while(n>=2){
            int a=binarysearch(dp,MAX,n);
            n-=dp[a];
            count++;
        }
        cout<<count<<"\n";
    }
}
