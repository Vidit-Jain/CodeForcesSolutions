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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int lowestone=INT_MAX;
        int highestone=INT_MIN;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]==1) {
                lowestone=min(lowestone,i);
                highestone=max(highestone,i);
            }   
        }
        int zeroes=0;
        for(int i=lowestone;i<highestone;i++){
            zeroes+=1-arr[i];
        }
        cout<<zeroes<<"\n";
    }
}