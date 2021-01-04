#include <bits/stdc++.h>
using namespace std;
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
        int freq[n+1]={0};
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int x=-1;
        for(int i=1;i<=n;i++){
            if(freq[i]==1){
                x=i;
                break;
            }
        }
        if(x==-1) cout<<"-1\n";
        else{
            for(int i=0;i<n;i++){
                if(arr[i]==x){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
}