#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int countarr[n+1];
    for(int i=0;i<n;i++){
         cin>>arr[i];
         countarr[i]=0;
    }
    countarr[n]=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=n)
        countarr[arr[i]]++;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(!countarr[i]){
            count++;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=i+1){
    //         count++;
    //     }
    // }
    cout<<count<<"\n";
}